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
        long long num_coins;
        if (a * m <= b * (m + 1)) // Use promotion if this condition is true
        {
            num_coins = (n / (m + 1)) * (a * m) + (n - ((n / (m + 1)) * (m + 1))) * min(a, b);
        }

        else
        {
            num_coins = (n / (m + 1)) * (b * (m + 1)) + (n - (n / (m + 1)) * (m + 1)) * min(a, b);
        }

        cout << num_coins << "\n";
    }
}
