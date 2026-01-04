#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << n << '\n';
        else if (n < 3)
        {
            int square_n = pow(n, 2);
            cout << square_n + (square_n - 1) + square_n - n << '\n';
        }

        else if (n < 5)
        {
            int square_n = pow(n, 2);
            cout << (square_n - 1) + square_n + (square_n - 2) + (square_n - 1 - n) << '\n';
        }

        else
        {
            int square_n = pow(n, 2);
            cout << (square_n - 1 - n) + (square_n - 1 - 2*n) + (square_n - 1) + (square_n - 2 - n) + (square_n - n) << '\n';
        }

    }
}