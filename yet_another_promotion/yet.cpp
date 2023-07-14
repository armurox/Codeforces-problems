#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        long long a, b, n, m;
        cin >> a >> b >> n >> m;
        long long num_coins = 0;
        long long min_coins;
        if (m < n)
        {
            for (long long i = 0; i < n - m; i++)
            {
                min_coins = a * (m + i) + b * (n - m - i - 1);
                
                if (num_coins == 0)
                {
                    num_coins = min_coins;
                }

                else if (min_coins < num_coins)
                {
                    num_coins = min_coins;
                }
            }
        }
        
        else if (b >= a && m >= n)
        {
            num_coins = a * n;
        }

        else if (b < a && m >= n)
        {
            num_coins = b * n;
        }

        // else if (b >= a && n >= m)
        // {
        //     num_coins = a * (n - 1);
        // }

        cout << num_coins << "\n";
    }
}
