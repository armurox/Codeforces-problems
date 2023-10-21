#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        string l1;
        string l2;
        cin >> l1 >> l2;
        if (l1[0] == l1[1] && l2[0] == l2[1] && l1[0] == l2[0])
        {
            cout << 0 << "\n";
        }

        else if ((l1[0] != l1[1] && l1[1] == l2[1] && l2[1] == l2[0]) || (l1[1] != l2[1] && l2[1] == l2[0] && l2[0] == l1[0]) 
        || (l2[1] != l2[0] && l2[0] == l1[0] && l1[0] == l1[1]) || (l2[0] != l1[0] && l1[0] == l1[1] && l1[1] == l2[1]))
        {
            cout << 1 << "\n";
        }

        else if ((l1[0] == l2[0] && l1[1] == l2[1]) || (l1[0] == l2[1] && l1[1] == l2[0]) || (l1[1] == l1[0] && l2[1] == l2[0]))
        {
            cout << 1 << "\n";
        }

        else if (l1[0] == l2[0] || l1[1] == l2[1] || l1[0] == l2[1] || l1[1] == l2[0] || l1[1] == l1[0] || l2[1] == l2[0])
        {
            cout << 2 << "\n";
        }

        else
        {
            cout << 3 << "\n";
        }
    }
}
