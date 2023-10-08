#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        num = (num < 0) ? -num : num;
        nums.push_back(num);
    }

    num = *min_element(nums.begin(), nums.end());
    cout << num << "\n";
}
