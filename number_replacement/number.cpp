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
            if (nums.count(num))
            {
                nums[num].push_back(j);
            }

            else
            {
                nums.emplace(make_pair(num, j));
            }
        }

        string word;
        cin >> word;
        char curr_letter;
        int yes = 1;
        for (auto it = nums.begin(), end = nums.end(); it != end; ++it)
        {
            curr_letter = word[(it -> second)[0]];
            for (auto it_2 = (it -> second).begin(); it_2 != (it -> second).end(); ++it)
            {
                if (word[(*it_2)] != curr_letter && yes)
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
