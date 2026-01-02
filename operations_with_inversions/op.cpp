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
        vector<int> v;
        int temp;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        int max_inversions = 0;
        int curr_inversions = 0;
        for (int j = 0; j < n; j++)
        {
            curr_inversions = 0;
            for (int k = j; k < n; k++)
            {
                if (v[k] < v[j])
                    curr_inversions++;
            }

            max_inversions = max(curr_inversions, max_inversions);
        }

        cout << max_inversions << '\n';
    }
}