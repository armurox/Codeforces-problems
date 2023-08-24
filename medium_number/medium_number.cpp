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
        vector<int> nums;
        int num;
        for (int j = 0; j < 3; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        sort(nums.begin(), nums.end());
        cout << nums[1] << "\n";
    }
}
