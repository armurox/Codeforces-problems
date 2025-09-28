#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (((max(a, b) <= min(a, b) * 2 + 2) && (max(c - a, d - b) <= min(c - a, d - b) * 2 + 2)) ? "YES\n" : "NO\n");
    }
}
