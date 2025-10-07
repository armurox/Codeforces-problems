#include <iostream>

using namespace std;

int main(void)
{
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long x, y;
        cin >> x >> y;
        if (y > x)
            cout << 2 << '\n';
        else if (x - y < 2 || y == 1)
            cout << -1 << '\n';
        else
            cout << 3 << '\n';

    }
}
