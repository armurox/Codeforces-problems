#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int cn;
    cin  >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        vector<int> nums;
        int num;
        int num_moves = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        int threshold = 2 * *min_element(nums.begin(), nums.end());
        for (int j = 0; j < n; j++)
        {
            num_moves += (nums[j] / (threshold - 1));
            if (nums[j] - ((nums[j] / (threshold - 1)) * (threshold - 1)) == 0)
            {
                num_moves--;
            }
        }

        cout << num_moves << "\n";
    }
}
