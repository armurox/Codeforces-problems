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
        int num_c = 0;
        for (int j = 1; j < n; j++)
        {
            if (s[j] == '@')
            {
                num_c++;
            }

            else if (s[j] == '*' && s[j - 1] == '*')
            {
                break;
            }
        }

        cout << num_c << "\n";
    }
}
