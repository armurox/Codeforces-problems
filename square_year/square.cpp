#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int n;
    double result;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        result = sqrt(n);
        if ((int) result * (int) result == n)
            cout << 0 << " " << result << "\n";
        else
            cout << -1 << "\n";
    }
}
