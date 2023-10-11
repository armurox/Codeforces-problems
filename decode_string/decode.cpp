#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string result = "";
        for (int j = 0; j < n; j++)
        {
            if (j < n - 2)
            {
                if (s[j] == '0')
                {
                    continue;
                }

                if (s[j + 2] == '0' && s[j + 3] != '0')
                {
                    result += string(1, char(stoi(s.substr(j, 2)) + 96));
                    j++;
                    continue;
                }

                else
                {
                    result += string(1, char(stoi(s.substr(j, 1)) + 96));
                }
            }

            else
            {
                if (s[j] == '0')
                {
                    continue;
                }

                else
                {
                    result += string(1, char(stoi(s.substr(j, 1)) + 96));
                }


            }
        }

        cout << result << "\n";
    }
}
