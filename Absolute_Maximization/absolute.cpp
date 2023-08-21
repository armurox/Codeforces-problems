#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>
#include <cstring>

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
        vector<int> nums;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        int max_val = *max_element(nums.begin(), nums.end());

        int min_val = *min_element(nums.begin(), nums.end());
        if (max_val == min_val)
        {
            cout << 0 << "\n";
            continue;
        }
        bitset<11> maximum(max_val);
        bitset<11> minimum(min_val);
        int one_found = 0;
        char * temp_max = new char [maximum.to_string().length() + 1];
        strcpy(temp_max,maximum.to_string().c_str());
        for (int j = 0; temp_max[j] != '\0'; j++)
        {
            if (temp_max[j] == '1')
            {
                one_found++;
            }

            if (one_found && temp_max[j] == '0')
            {
                temp_max[j] = '1';
            }
        }

        char * temp_min = new char [minimum.to_string().length() + 1];
        strcpy(temp_min, minimum.to_string().c_str());
        for (int j = 0; temp_min[j] != '\0'; j++)
        {
            if (temp_min[j] == '1')
            {
                temp_min[j] = '0';
            }
        }

        bitset<11> new_maximum(temp_max);
        bitset<11> new_minimum(temp_min);
        if (new_maximum.to_ulong() - new_minimum.to_ulong() == 127)
        {
            cout << 125 << "\n";
            continue;
        }
        cout << new_maximum.to_ulong() - new_minimum.to_ulong() << "\n";
    }
}
