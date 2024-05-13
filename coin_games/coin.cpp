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
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool is_pos = false;
        if (n > 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'U')
                {
                    if (s[(j + 1) % n] == 'U' || s[(j - 1) % n] == 'U')
                    {
                        is_pos = true;
                        break;
                    }
                }
            }
        }

        else if (s == "UD" || s == "DU" || s == "U")
        {
            is_pos = true;
        }
        
        string ans = is_pos ? "YES\n" : "NO\n";
        cout << ans;
    }
}
