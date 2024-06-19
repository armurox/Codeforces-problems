#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int min_max = max(a[0], a[1]);
        int curr_max;
        for (int j = 1; j < n - 1; j++)
        {
            curr_max = max(a[j], a[j + 1]);
            min_max = min(min_max, curr_max);
        }

        cout << min_max - 1 << "\n";
    }
}
