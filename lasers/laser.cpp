#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int temp;
        for (int j = 0; j < n + m; j++)
        {
            cin >> temp;
        }

        cout << n + m << '\n';
    }
}
