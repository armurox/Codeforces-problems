#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)

{
    int t;
    cin >> t;
    int n;
    long long temp;
    long long _sum = 0;
    for (int i = 0; i < t; i++)
    {
        _sum = 0;
        cin >> n;
        vector<long long> a;
        for (int j = 0; j < n; ++j)
        {
            cin >> temp;
            a.push_back(temp);
        }

        sort(a.begin(), a.end(), greater<>());
        for (int j = 0; j < n; j += 2)
        {
            _sum += a[j];
        }

        cout << _sum << '\n';
    }
}
