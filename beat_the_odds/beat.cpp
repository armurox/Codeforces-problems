#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0l; i < t; i++)
    {
        int n;
        cin >> n;
        int num;
        int num_even = 0;
        int num_odd = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (num % 2)
            {
                num_odd++;
            }

            else
            {
                num_even++;
            }
        }

        if (num_odd > num_even)
        {
            cout << num_even << "\n";
        }

        else
        {
            cout << num_odd << "\n";
        }
    }
}
