#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool yes = false;
        for (int j = 0; j < n; j++)
        {
            if (s.at(j) == '0')
            {
                cout << "YES\n"; 
                yes = true;
                break;
            }
        }

        if (!yes)
        {
            cout << "NO\n";
        }

    }
}
