#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, q, a;
        cin >> k >> q >> a;
        int num;
        for (int j = 1; j < k; j++)
        {
            cin >> num;
        }

        for (int j = 0; j < q; j++)
        {
            cin >> num;
            cout << (a > num ? num : (a - 1)) << " ";
        }
        cout << "\n";
    }
}
