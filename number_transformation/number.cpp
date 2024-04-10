#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        if (y % x == 0)
        {
            cout << 1 << " " << y / x << "\n";
        }
        else
        {
            cout << 0 << " " << 0 << "\n";
        }
    }
}
