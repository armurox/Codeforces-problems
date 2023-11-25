#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        bool s_good = true;
        bool t_good = true;
        vector<int> locations;
        // Check if s is good
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == s[j + 1])
            {
                s_good = false;
                locations.push_back(j);
            }
        }

        if (s_good)
        {
            cout << "Yes\n";
            continue; 
        }

        // Checkl if t is good
        for (int j = 0; j < m - 1; j++)
        {
            if (t[j] == t[j + 1])
            {
                t_good = false;
            }
        }

        if (!t_good)
        {
            cout << "No\n";
            continue;
        }

        bool yes = true;
        for (vector<int>::iterator it = locations.begin(); it != locations.end(); ++it)
        {
            if (s[*it] == t[0] || s[*it + 1] == t[m - 1])
            {
                cout << "No\n";
                yes = false;
                break;
            }
        }

        if (yes)
        {
            cout << "Yes\n";
        }

    }
}
