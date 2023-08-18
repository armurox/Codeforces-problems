#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n;
        cin >> n;
        vector<int> nums;
        int num;
        int max = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        int num_moves = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (nums[j] > nums[j + 1] && nums[j] > max)
            {
                num_moves = nums[j];
                max = num_moves;
            }
        }

        cout << num_moves << "\n";
    }
}
