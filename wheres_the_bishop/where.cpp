#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int nh;
        int col_ind = 0;
        int col_ind_1 = 0;
        bool complete = false;
        bool first_col = false;
        for (int j = 0; j < 8; j++)
        {
            nh = 0;
            cin >> s;
            col_ind_1 = 0;
            col_ind = 0;
            first_col = false;
            for (int k = 0; k < 8; k++)
            {
                if (s[k] == '#' && !first_col)
                {
                    nh++;
                    col_ind_1 = k;
                    first_col = true;
                }

                else if (s[k] == '#')
                {
                    nh++;
                    col_ind = k;
                }
            } 

            if (nh == 2 && !complete && (col_ind - col_ind_1) == 2)
            {
                cout << j + 2 << " " << col_ind << "\n";
                complete = true;
            }
        }
    }
}
