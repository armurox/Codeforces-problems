#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, n;
        cin >> x >> n;
        cout << ((n % 2) ? x : 0) << '\n';
    }
}
