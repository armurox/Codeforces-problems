#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        if (k != 1 && k != n)
        {
            cout << -1 << "\n";
        }

        else if (k == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j << " ";
            }
            cout << "\n";
        }

        else
        {
            for (int j = 0; j < n; j++)
            {
                cout << 1 << " ";
            }

            cout << "\n";
        }
    }
}
