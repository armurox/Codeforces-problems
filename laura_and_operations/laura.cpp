#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << ((abs(b - c) % 2 == 0) ? 1 : 0) << ' ';
        cout << ((abs(a - c) % 2 == 0) ? 1 : 0) << ' ';
        cout << ((abs(a - b) % 2 == 0) ? 1 : 0) << '\n';
    }
}
