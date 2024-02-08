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
        size_t prev = 0;
        size_t num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            prev++;
            if (num == prev)
            {
                prev++;
            }
        }

        cout << prev << "\n";
    }
}
