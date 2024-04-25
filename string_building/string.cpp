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
        int nca = 0;
        int ncb = 0;
        bool yes = true;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
            {
                if (ncb == 1)
                {
                    yes = false;
                    cout << "NO\n";
                    break;
                }

                ncb = 0;
                nca++;
            }

            else
            {
                if (nca == 1)
                {
                    yes = false;
                    cout << "NO\n";
                    break;
                }

                nca = 0;
                ncb++;
            }
        }

        if ((nca == 1 || ncb == 1) && yes)
        {
            yes = false;
            cout << "NO\n";
        }

        if (yes)
        {
            cout << "YES\n";
        }
    }
}
