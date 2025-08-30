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

        for (int j = 0; j < n - 1; j++)
        {
            cout << ((j % 2) ? 3 : -1) << ' ';
        }
        cout << ((n % 2) ? -1 : 2) << '\n';
    }
}
