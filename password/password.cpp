#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n;
        cin >> n;
        unordered_set<int> nums;
        int num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            nums.insert(num);
        }

        int comb = 0;
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                for (int l = 0; l < 10; l++)
                {
                    for (int m = 0; m < 10; m++)
                    {
                        if (nums.find(j) != nums.end() || nums.find(k) != nums.end() || nums.find(l) != nums.end() || nums.find(m) != nums.end())
                        {
                            continue;
                        }

                        if ((j == k && l == m && k != l) || (j == l && k == m && k != l) || (j == m && k == l && k != m))
                        {
                            comb++;
                        }
                    }
                }
            }
        }

        cout << comb << "\n";
    }
}
