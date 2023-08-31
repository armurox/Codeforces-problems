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
        cin >> n;
        vector<int> nums;
        int num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        if (min_element(nums.begin(), nums.end()) != nums.begin())
        {
            cout << "No\n";
        }

        else
        {
            cout << "Yes\n";
        }
    }
}
