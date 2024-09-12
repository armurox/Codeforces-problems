#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

int main(void)
{
    int t, n;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> ans;
        for (int j = 0; j < n; j++)
        {
            cin >> s;
            for (int k = 0; k < 4; k++)
            {
                if (s.at(k) == '#')
                {
                    ans.push_back(k + 1);
                    break;
                }
            }
        }

        for (reverse_iterator<vector<int>::iterator> it = ans.rbegin(); it != ans.rend(); ++it)
        {
            cout << *it << " ";
        }
        cout << "\n";
    }
}
