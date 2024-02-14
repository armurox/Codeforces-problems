#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        size_t num;
        int max_val = 0;
        vector<size_t> nums;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.push_back(num);
        }

        if (k == 1)
        {
            max_val = (n % 2) ? (n - 1) / 2 : (n - 2) / 2;
        }

        else
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (nums[j] > (nums[j - 1] + nums[j + 1]))
                {
                    max_val += 1;
                }
            }
        }

        cout << max_val << "\n";
        
       
    }
}
