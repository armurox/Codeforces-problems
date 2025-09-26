#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, x;
        cin >> k >> x;
        cout << static_cast<int>(pow(2, k) * x) << '\n';

    }
}
