#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        int temp;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
        }
        if (n % 2)
        {
            cout << 4 << "\n";
            for (int j = 0; j < 2; j++)
            {
                cout << 1 << " " << n - 1 << "\n";
            }

            for (int j = 0; j < 2; j++)
            {
                cout << n - 1 << " " << n << "\n";
            }
            
        }

        else
        {
            cout << 2 << "\n";
            for (int j = 0; j < 2; j++)
            {
                cout << 1 << " " << n << "\n";
            }
            
        }
    }
}
