#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if ((n >= 1 &&n <= 6) || n == 9)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
            if (n % 3)
            {
                cout << 1 << " " << 2 << " " << n - 3 << "\n";
            }

            else
            {
                cout << 1 << " " << 4 << " " << n - 5 << "\n";
            }
        }
    }
}
