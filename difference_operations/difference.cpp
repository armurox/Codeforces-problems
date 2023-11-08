#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int num;
        bool yes = true;
        vector<int> nums;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        for (int j = 1; j < n; j++)
        {
            if (nums[j] % nums[0] != 0)
            {
                yes = false;
                break;
            }
        }


        if (yes)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}
