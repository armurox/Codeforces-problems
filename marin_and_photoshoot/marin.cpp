#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int num_ones_between = 0;
        int num_add = 0;
        bool first_zero = false;
        for (size_t j = 0; j < s.length(); j++)
        {
            if (s[j] == '0' && first_zero)
            {
                if (num_ones_between == 0)
                {
                    num_add += 2;
                }

                else if (num_ones_between == 1)
                {
                    num_add++;
                }

                num_ones_between = 0;
            }

            else if (s[j] == '0')
            {
                first_zero = true;
                num_ones_between = 0;
            }

            else
            {
                num_ones_between++;
            }
        }

        cout << num_add << "\n";
    }
}


