#include <iostream>
#include <vector>

#define int size_t

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

signed main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int s = 1;
        int n;
        cin >> n;
        vector<int> k(n);
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }

        for (int i = 0; i < n; i++)
        {
            s = lcm(s, k[i]);
        }

        int possible_sum = 0;
        for (int i = 0; i < n; i++)
        {   
            ans[i] = s / k[i];
            possible_sum += ans[i];

        }

        if (possible_sum < s)
        {
            for (int i = 0; i < n; i++)
                cout << ans[i] << " ";
            cout << "\n";
        }

        else
        {
            cout << -1 << "\n";
        }

    }
}

int gcd(int a, int b)
{
    return (a == 0) ? b : gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
