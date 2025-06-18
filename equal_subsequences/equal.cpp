#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        for (int j = 0; j < k; j++)
            cout << 1;
        for (int j = 0; j < n - k; j++)
            cout << 0;
        cout << "\n";
    }
}
