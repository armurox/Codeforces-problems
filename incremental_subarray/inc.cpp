#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        int temp;
        int prev = 0;
        bool always_increasing = true;
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            if (temp <= prev)
                always_increasing = false;
            prev = temp;
        }

        cout << ((always_increasing) ? ((n - temp) + 1) : 1) << '\n';
    }
}
