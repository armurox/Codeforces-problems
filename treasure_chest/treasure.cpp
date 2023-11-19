#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int diff = y - x;
        if (0 <= diff && diff <= k)
        {
            cout << y << "\n";
        }

        else if (0 <= diff)
        {
            cout << 2 * y - (x + k) << "\n";
        }

        else
        {
            cout << (-1 * diff) + y << "\n";
        }
    }
}
