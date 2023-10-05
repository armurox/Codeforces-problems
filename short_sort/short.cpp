#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        string s;
        cin >> s;
        if (s == "abc" || s == "bac" || s == "cba" || s == "acb")
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}
