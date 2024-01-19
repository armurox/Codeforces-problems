#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a; 
        long long x;
        long long max_val = 10000000005;
        vector<long long> threes;
        long long min_val = 0;
        long long num_valid = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a >> x;
            if (a == 1)
            {
                if (x > min_val)
                {
                    min_val = x;
                }
            }

            else if (a == 2)
            {
                if (x < max_val)
                {
                    max_val = x;
                }
            }

            else
            {
                threes.push_back(x);
            }
        }

        for (vector<long long>::iterator it = threes.begin(); it != threes.end(); ++it)
        {
            if (*it >= min_val && *it <= max_val)
            {
                num_valid--;
            }
        }

        if (max_val >= min_val)
        {
            num_valid += max_val + 1 - min_val;
        }

        cout << num_valid << "\n";
    }
}
