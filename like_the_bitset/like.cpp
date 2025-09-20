#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int max_consec_ones{ };
        int curr_consec_ones{ };
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                curr_consec_ones++;
                max_consec_ones = max(max_consec_ones, curr_consec_ones);

            }

            else
                curr_consec_ones = 0;
        }

        int max_val{ n };
        int min_val{ 1 };

        if (max_consec_ones >= k)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int j = 0; j < n; j++)
            {
                if (s[j] == '1')
                {
                    cout << min_val << ' ';
                    min_val++;
                }

                else
                {
                    cout << max_val << ' ';
                    max_val--;
                }
            }
            cout << '\n';
        }
    }
}
