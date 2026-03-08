#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        // cout << 'n is' << n << '\n';
        vector<int> v;
        int temp;
        int num_ones = 0;
        int num_zeros = 0;
        bool no_one_between_zeros = true;
        bool found_zero = false;
        int prev = 0;
        for (int j = 0; j < n; j++)
        {
            if (j != 0 && prev == 1 && found_zero)
                no_one_between_zeros = false;
            cin >> temp;
            if (temp == 1)
                num_ones++;
            else
            {
                num_zeros++;
                found_zero = true;
            }
            if (j != n - 1)
            {
                prev = temp;
            }
            // cout << j << ' ' << prev << 't' << temp << n;
            
        }

        // cout << "test " << prev << ' ' << temp << '\n';

        bool ends_with_zero = false;
        if (prev == 1 && found_zero)
        {
            no_one_between_zeros = false;
            ends_with_zero = true;
        }


        cout << (((num_ones > num_zeros) || (num_ones == num_zeros && !ends_with_zero) || (num_ones && no_one_between_zeros)) ? "Alice\n" : "Bob\n");

    }
}
