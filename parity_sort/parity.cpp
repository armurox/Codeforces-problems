#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> vec_1;
        vector<int> vec_2;
        int num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            vec_1.push_back(num);
            vec_2.push_back(num);
        }

        num = 0;
        sort(vec_1.begin(), vec_1.end());
        for (int j = 0; j < n; j++)
        {
            if ((vec_1[j] % 2 != vec_2[j] % 2))
            {
                num = 1;
                cout << "NO\n";
                break;
            }
        }

        if (!num)
        {
            cout << "YES\n";
        }
    }
}
