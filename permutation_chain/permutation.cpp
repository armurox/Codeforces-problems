#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << n << "\n";
        vector<int> nums;
        for (int j = 0; j < n; j++)
        {
            nums.push_back(j + 1);
            cout << j + 1 << " ";
        }
        cout << "\n";

        for (int j = 0; j < n - 1; j++)
        {
            iter_swap(nums.begin() + j, nums.begin() + (j + 1));
            for (int k = 0; k < n; k++)
            {
                cout << nums[k] << " ";
            }
            cout << "\n";
        }
    }
}