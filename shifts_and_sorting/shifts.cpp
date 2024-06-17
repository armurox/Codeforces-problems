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
        cin >> s;
        size_t size = s.length();
        size_t ans = 0;
        size_t consec_ones = 0;
        size_t consec_zeros = 0;
        for (size_t j = 0; j < size; j++)
        {
            if ((s[j] == '1' && consec_zeros))
            {
                ans += (consec_ones + 1) * consec_zeros;
                consec_ones++;
                consec_zeros = 0;
            }

            else if (j == size - 1 && consec_ones && s[j] == '0')
            {
                consec_zeros++;
                ans += (consec_ones + 1) * consec_zeros;
            }

            else if (s[j] == '1')
            {
                consec_ones++;
            }

            else if (consec_ones && s[j] == '0')
            {
                consec_zeros++;
            }
        }

        cout << ans << "\n";
    }
}
