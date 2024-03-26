#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int num_tents = a + (b / 3);
        int rem_0 = (c / 3) + (c % 3 ? 1 : 0);
        int rem_1 = ((c - 2)/ 3) + ((c - 2) % 3 ? 1 : 0);
        int rem_2 = ((c - 1)/ 3) + ((c - 1) % 3 ? 1 : 0);
        if (b % 3 == 0)
        {
            num_tents += rem_0;

        }

        else if (b % 3 == 1)
        {
            if (c - 2 < 0)
            {
                cout << -1 << "\n";
                continue;
            }
            num_tents += rem_1 + 1;
        }

        else
        {
            if (c - 1 < 0)
            {
                cout << -1 << "\n";
                continue;
            }
            num_tents += rem_2 + 1;
        }

        cout << num_tents << "\n";
    }
}
