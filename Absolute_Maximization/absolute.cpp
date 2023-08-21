#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n;
        cin >> n;
        int num;
        vector<int> nums;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        int max_val = *max_element(nums.begin(), nums.end());
        int min_val = *min_element(nums.begin(), nums.end());
        for (int j = 0; j < n; j++)
        {
            max_val |= nums[j];
            min_val &= nums[j];
        }

        cout << max_val - min_val << "\n";
    }
}
