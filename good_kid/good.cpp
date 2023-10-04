#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        int num;
        vector<int> nums;
        int min = 20;
        int ind = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (num < min)
            {
                min = num;
                ind = j;
            }
            nums.push_back(num);
        }

        nums[ind]++;
        int product = accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
        cout << product << "\n";
    }
}
