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

        int num_r = 0;
        int num_c = 0;
        int curr_pos = 0;
        int max_num = max(n, m);
        bool no = true;
        while (curr_pos < max_num)
        {
            if (robs[curr_pos][curr_pos] == 'R')
            {
                cout << "YES\n";
                no = false;
                break;
            }

            if (num_r > 0 && num_c > 0)
            {
                num_r = 0;
                num_c = 0;
                curr_pos++;
                continue;
            }

            else if ((num_r > 0 && num_c == 0) || (num_r == 0 && num_c > 0))
            {
                cout << "YES\n";
                no = false;
                break;
            }

            for (int j = curr_pos; j < n; j++)
            {
                if (robs[curr_pos][j] == 'R')
                {
                    num_r++;
                }
            }

            for (int j = curr_pos; j < n; j++)
            {
                if (robs[j][curr_pos] == 'R')
                {
                    num_c++;
                }
            }

            curr_pos++;
        }

        if (no)
        {
            cout << "NO\n";
        }
    }
}