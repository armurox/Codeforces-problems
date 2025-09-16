#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int l1, r1;
        int mid = 0;
        r1 = min((mid + m), r);
        m -= (mid + m < r) ? m : r;
        l1 = max((mid - m), l);
        cout << l1 << ' ' << r1 << '\n';
    }
}
