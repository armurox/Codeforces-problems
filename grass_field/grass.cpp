#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int num;
        int num_ones = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> num;
            if (num == 1)
            {
                num_ones++;
            }
        }

        if (num_ones == 4)
        {
            cout << 2 << "\n";
        }

        else if (num_ones > 0)
        {
            cout << 1 << "\n";
        }

        else
        {
            cout << 0 << "\n";
        }
    }
}
