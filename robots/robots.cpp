#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        vector<string> robs;
        string cell;
        for (int j = 0; j < n; j++)
        {
            cin >> cell;
            robs.push_back(cell);
        }

        int first_r = -1;
        bool no = false;
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (robs[j][k] == 'R')
                {
                    first_r = k;
                    found = true;
                    break;
                }
            }

            if (found)
            {
                break;
            }
        }

        if (first_r == 0)
        {
            cout << "YES\n";
            continue;
        }

        else if (first_r == -1)
        {
            cout << "NO\n";
            continue;
        }

        for (int k = first_r - 1; k > -1; k--)
        {
                for (int j = 0; j < n; j++)
                {
                    if (robs[j][k] == 'R')
                    {
                        cout << "NO\n";
                        no = true;
                        break;
                    }
                }

                if (no)
                {
                    break;
                }
            }
        
        if (!no)
        {
            cout << "YES\n";
        }
    }
}