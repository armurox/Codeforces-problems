#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n;
        int num_moves = 0;
        cin >> n;
        vector<int> nums;
        int num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        for (int j = 0; j < n; j++)
        {
            if (temp[j] != nums[j])
            {
                num_moves++;
            }
        }
        
        cout << num_moves / 2 << "\n";

    }
}
