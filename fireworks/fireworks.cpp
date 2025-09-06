#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long a, b, m;
        cin >> a >> b >> m;
        cout << ((long long) m / a) + ((long long) m / b) + 2 << '\n';
    }
}
