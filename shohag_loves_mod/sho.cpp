#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << 2 << ' ' << 3;
        for (int j = 2; j < n; j++)
        {
            cout << ' ' << 2 * j + 1;
        }
        cout << '\n';
    }
}
