#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        for (int j = n; j > m; j--)
            cout << j << ' ';
        for (int j = 1; j < m + 1; j++)
            cout << j << ' ';
        cout << endl;
    }
}
