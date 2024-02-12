#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        size_t x, y;
        cin >> x >> y;
        cout << 2 << "\n" << x - 1 << " " << 1 << "\n" << x << " " << y << "\n";
    }
}
