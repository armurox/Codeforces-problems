#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> nums;
        bool yes = true;
        int num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        int count = 1;
        if (n > 3)
        {
            for (int j = 3; j < n; j+=(int)pow(2, count))
            {
                if (nums[j] < nums[j - 1])
                {
                    cout << "NO\n";
                    yes = false;
                    break;
                }
                count++;
            }
        }

        if (yes)
        {
            cout << "YES\n";
        }

    }
}
