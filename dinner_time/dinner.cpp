#include <iostream>

using namespace std;

int main(void)
{
    int t{};
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        if (n % p == 0 && (int) (n / p) * q != m)
        {
            cout << "NO\n";
        }

        else
            cout << "YES\n";
    }
}
