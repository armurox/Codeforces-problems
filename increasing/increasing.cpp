#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        vector<int> nums;
        unordered_set<int> no_dups;
        int num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            no_dups.insert(num);
            nums.push_back(num);
        }

        int yes = 1;
        for (unordered_set<int>::iterator it = no_dups.begin(), end = no_dups.end(); it != end; ++it)
        {
            if (count(nums.begin(), nums.end(), *it) > 1)
            {
                cout << "NO\n";
                yes = 0; 
                break;
            }
        }

        if (yes)
        {
            cout << "YES\n";
        }
    }
}
