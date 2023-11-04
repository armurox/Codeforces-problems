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
        if (n % 2)
        {
            cout << 1 << " ";
            for (int j = 2; j < n + 1; j++)
            {
                if (j % 2)
                {
                    cout << j - 1 << " ";
                }

                else
                {
                    cout << j + 1 << " ";
                }
            }
            
            cout << "\n";
        }

        else
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (j % 2)
                {
                    cout << j + 1 << " ";
                }

                else
                {
                    cout << j - 1 << " ";
                }
            }

            cout << "\n";
        }
    }
}
