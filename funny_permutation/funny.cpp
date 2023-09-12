#include <iostream>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0 ; i < cn; i++)
    {
        int n;
        cin >> n;
        if (n > 3)
        {
            cout << n - 1 << " " << n;
            for (int j = 1; j < n - 1; j++)
            {
                cout << " " << j;
            }

            cout << "\n";
        }

        else if (n == 3)
        {
            cout << -1 << "\n";
        }

        else
        {
            cout << 2 << " " << 1 << "\n";
        }
    }
}
