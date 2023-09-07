#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <utility>
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
        int num;
        unordered_map<int, vector<int>> nums;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (nums.find(num) != nums.end())
            {
                nums[num].push_back(j);
            }

            else
            {
                nums.insert(make_pair(num, vector<int> {j}));
            }
        }

        string word;
        cin >> word;
        char curr_letter;
        int yes = 1;
        for (auto it = nums.begin(), end = nums.end(); it != end; ++it)
        {
            curr_letter = word.at(*it -> second.begin());
            for (auto it_2 = (it -> second).begin(); it_2 != (it -> second).end(); ++it_2)
            {
                if (word.at((*it_2)) != curr_letter && yes)
                {
                    cout << "NO\n";
                    yes = 0;
                }
            }
        }

        if (yes)
        {
            cout << "YES\n";
        }
    }
}
