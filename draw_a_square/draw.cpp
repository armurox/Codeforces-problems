#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        cout << ((l == r && r == u && u == d) ? "YES\n" : "NO\n");
    }
}
