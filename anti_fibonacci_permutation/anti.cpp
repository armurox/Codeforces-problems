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
        bool done;
        for (int j = n; j > 0; j--)
        {
            done = false;
            for (int k = n; k > 0; k--)
            {
                if (k == j && !done)
                {
                    cout << 1 << " ";
                    done = true;
                    k++;
                }

                else
                {
                    if (k == 1)
                    {
                        break;
                    }
                    cout << k << " ";
                }
            }
            cout << "\n";
        }
    }
}
