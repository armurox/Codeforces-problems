#include <iostream>
#include <algorithm>
#include <string>

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
        int num_b = count(s.begin(), s.end(), 'B');
        if (num_b == k)
        {
            cout << 0 << "\n";
        }

        else if (num_b < k)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'B')
                {
                    continue;
                }

                s[j] = 'B';
                num_b++;
                if (num_b == k)
                {
                    cout << 1 << "\n" << j + 1 << " " << "B\n";
                }
            }
        }

        else
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'A')
                {
                    continue;
                }

                s[j] = 'A';
                num_b--;
                if (num_b == k)
                {
                    cout << 1 << "\n" << j + 1 << " " << "A\n";
                }
            }
        }
    }
}
