#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int ans;
    int temp;
    for (int i = 0; i < t; i++)
    {
        ans = 0;
        int n;
        cin >> n;
        vector<int> a, b;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        for (int j = 0; j < n; j++)
        {
            ans += (a[j] > b[j]) ? (a[j] - b[j]) : 0;
        }

        cout << ans + 1 << '\n';
    }
}
