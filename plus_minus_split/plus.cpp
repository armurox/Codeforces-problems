#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if (a.at(j) == '-')
            {
                ans -= 1;
            }

            else
            {
                ans += 1;
            }
        }

        cout << abs(ans) << "\n";
    }
}
