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
        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (j < 2)
            {
                for (int k = 0; k < j + 1; k++)
                {
                    cout << 1 << " ";
                }
                cout << "\n";
            }

            else
            {
                cout << 1 << " ";

                for (int k = 1; k < j; k++)
                {
                    cout << 0 << " ";
                }

                cout << 1 << "\n";
            }
        }
    }
}


