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
        int temp;
        cin >> temp;
        int sum = temp;
        int l = 1;
        int r = 1;
        int same_l = 1;
        int same_r = 1;
        int curr_count = 1;
        for (int j = 1; j < n; j++)
        {
            cin >> temp;
            if (sum + temp % 3 == sum % 3)
            {
                if (same_l != 1 && same_r == 1)
                {
                    same_r = ++curr_count;
                }

                else if (l == 1)
                    same_l = ++curr_count;
            }

            else
            {
                if (l != 1 && r == 1)
                {
                    r = ++curr_count;
                }
                else if (l == 1)
                    l = ++curr_count;
            }

            sum += temp;
        }

        if (same_l != 1 || same_r != 1)
        {
            cout << same_l << ' ' << same_r << '\n';
        }

        else if (l != 1 || r != 1)
        {
            cout << l << ' ' << r << '\n';
        }

        else
        {
            cout << 0 << ' ' << 0 << '\n';
        }

    }
}
