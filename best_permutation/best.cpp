#include <iostream>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        if (n % 2)
        {
            cout << 1 << " ";
            for (int j = n - 2; j > 1; j--)
            {
                cout << j << " ";
            }

            cout << n - 1 << " " << n << "\n";
        }

        else
        {
            for (int j = n - 2; j > 0; j--)
            {
                cout << j << " ";
            }
            cout << n - 1 << " " << n << "\n";
        }
    }
}
