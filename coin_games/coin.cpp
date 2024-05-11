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
        if (count(s.begin(), s.end(), 'U') % 3)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }

    }
}
