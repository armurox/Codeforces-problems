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
        int num_neg = 0;
        int num_zeros = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            if (temp == -1)
                num_neg++;
            if (temp == 0)
                num_zeros++;
        }

        cout << num_zeros + ((num_neg % 2) * 2) << '\n';
    }
}
