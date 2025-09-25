#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        if (n == m)
            cout << 0 << '\n';
        else if (n % m == 0 || m % n == 0)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
}
