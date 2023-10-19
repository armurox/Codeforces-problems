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
        string c1;
        string c2;
        cin >> c1;
        cin >> c2;
        bool no = false;
        for (int j = 0; j < n; j++)
        {
            if ((c1.at(j) == 'R' && c2.at(j) == 'R') || ((c1.at(j) == 'G' || c1.at(j) == 'B') && (c2.at(j) == 'G' || c2.at(j) == 'B')))
            {
                continue;
            }

            else
            {
                cout << "NO\n";
                no = true;
                break;
            }
        }

        if (!no)
        {
            cout << "YES\n";
        }
    }
}
