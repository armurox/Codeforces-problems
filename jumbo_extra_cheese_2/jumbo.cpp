#include <iostream>
#include <vector>
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
        size_t per = 0;
        vector<size_t> maxs;
        size_t a, b;
        for (int j = 0; j < n; j++)
        {
            cin >> a >> b;
            per += 2 * min(a, b);
            maxs.push_back(max(a, b));
        }

        sort(maxs.begin(), maxs.end());

        for (int j = 0; j < n; j++)
        {
            if (j < 2)
            {
                per += maxs.at(j);
            }
            else
            {
                per += (maxs.at(j) - maxs.at(j - 2)) + (maxs.at(j) - maxs.at(j - 1));
            }      
        }

        cout << per << "\n";
    }
}
