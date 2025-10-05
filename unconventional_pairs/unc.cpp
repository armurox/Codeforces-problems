#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        vector<long long> v;
        long long temp;
        for (long long j = 0; j < n; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        long long max = v[1] - v[0];
        long long diff;
        for (long long j = 3; j < n; j += 2)
        {
            if ((diff = v[j] - v[j - 1]) > max)
                max = diff;
        }

        cout << max << '\n';

    }
}
