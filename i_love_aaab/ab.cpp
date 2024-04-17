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
        int size = s.length();
        char prev = 'B';
        bool yes = true;
        for (int j = 0; j < size; j++)
        {
            if ((s[j] == 'B' && prev != 'A') || (j == size - 1 && s[j] != 'B'))
            {
                cout << "NO\n";
                yes = false;
                break;
            }

            prev = s[j];
        }

        if (yes)
            cout << "YES\n";
    }
}

