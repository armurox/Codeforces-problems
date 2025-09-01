#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (n % 2 == a % 2 && n % 2 == b % 2)
            cout << "YES\n";
        else if (n % 2 == max(a, b) % 2 && n % 2 == b % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
