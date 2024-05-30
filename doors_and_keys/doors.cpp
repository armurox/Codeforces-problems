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
        if (s.find("r") < s.find("R") && s.find("g") < s.find("G") && s.find("b") < s.find("B"))
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}

