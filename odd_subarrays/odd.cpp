#include <iostream>
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
        int num;
        vector<int> nums;
        int num_sub = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        for (int j = 0; j < n - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                num_sub++;
                j++;
            }
        }

        cout << num_sub << "\n";
    }
}
