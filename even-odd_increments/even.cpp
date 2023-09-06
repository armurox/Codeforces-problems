#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n, q;
        cin >> n >> q;
        long long num;
        long long num_even = 0;
        long long sum_even = 0;
        long long num_odd = 0;
        long long sum_odd = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (num % 2)
            {
                num_odd++;
                sum_odd += num;
            }

            else
            {
                num_even++;
                sum_even += num;
            }
        }
        
        for (int j = 0; j < q; j++)
        {
            long long sum = 0;
            int type, add;
            cin >> type >> add;
            if (type == 1 && add % 2)
            {
                num_even += num_odd;
                sum_odd += num_odd * add;
                sum_even += sum_odd;
                sum_odd = 0;
                num_odd = 0;
                sum = sum_even;
            }

            else if (type == 1 && add % 2 == 0)
            {
               sum_odd += num_odd * add;
               sum = sum_even + sum_odd;
            }

            else if (type == 0 && add % 2 == 1)
            {
                num_odd += num_even;
                sum_even += num_even * add;
                sum_odd += sum_even;
                sum_even = 0;
                num_even = 0;
                sum = sum_odd;
            }

            else if (type == 0 && add % 2 == 0)
            {
                sum_even += num_even * add;
                sum = sum_even + sum_odd;
            }

            cout << sum << "\n";
        }

    }
}
