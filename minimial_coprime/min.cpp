#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        size_t a, b;
        cin >> a >> b;
        cout << ((a == b && a == 1) ? 1 : b - a) << "\n";
    }
}
