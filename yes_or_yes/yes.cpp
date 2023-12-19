#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        for (size_t j = 0; j < s.length(); j++)
        {
            s[j] = toupper(s[j]);
        }

        if (s == "YES")
        {
            cout << s << "\n";
        }

        else
        {
            cout << "NO\n";
        }
        
    }
}
