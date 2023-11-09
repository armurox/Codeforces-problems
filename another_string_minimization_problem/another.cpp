#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        int num;
        vector<int> nums;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        string s;
        for (int j = 0; j < m; j++)
        {
            s.append("B");
        }

        for (int j = 0; j < n; j++)
        {
            if (m - 1 - (nums[j] - 1) < nums[j] - 1 && s[m - 1 - (nums[j] - 1)] != 'A')
            {
                s.at(m - 1 - (nums[j] - 1)) = 'A';
            }

            else if (s[nums[j] - 1] != 'A')
            {
                s.at(nums[j] - 1) = 'A';
            }

            else if (s[m - 1 - (nums[j] - 1)] != 'A')
            {
                s.at(m - 1 - (nums[j] - 1)) = 'A';
            }
        }

        cout << s << "\n";
    }
}
