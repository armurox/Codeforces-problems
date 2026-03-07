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
        if (n == 2 || n == 3)
            cout << n << '\n';
        else if (n % 2 == 0)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }
}
