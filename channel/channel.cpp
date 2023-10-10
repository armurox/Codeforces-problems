#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n, a, q;
        cin >> n >> a >> q;
        string info;
        cin >> info;
        int s_u = a;
        int num_online = a;
        bool yes = false;
        bool possible = false;
        if (num_online == n)
        {
            cout << "YES\n";
            continue;
        }
        for (int j = 0; j < q; j++)
        {
            if (info[j] == '+')
            {
                num_online++;
                s_u++;
            }

            else if (info[j] == '-')
            {
                num_online--;
            }

            if (num_online == n)
            {
                cout << "YES\n";
                yes = true;
                break;
            }

            if (s_u == n)
            {
                possible = true;
            }
        }

        if (possible && !yes)
        {
            cout << "MAYBE\n";
        }

        else if (!yes)
        {
            cout << "NO\n";
        }
    }
}
