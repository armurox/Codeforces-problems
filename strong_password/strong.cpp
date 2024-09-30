#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int size = s.size();
        bool found = false;
        for (int j = 0; j < size - 1; j++)
        {
            if (s[j] == s[j + 1] && s[j] != 'f')
            {
                s = s.substr(0, j + 1) + "f" + s.substr(j + 1, size - j - 1);
                found = true;
                break;
            }

            else if (s[j] == s[j + 1] && s[j])
            {
                s = s.substr(0, j + 1) + "a" + s.substr(j + 1, size - j - 1);
                found = true;
                break;
            }
        }
        if (!found)
            cout << (s.at(0) == 'f' ? "a" + s : "f" + s) << "\n";
        else
            cout << s << "\n";
    }
}
