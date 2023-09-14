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
        if (n == 1)
        {
            per += 2 * maxs.at(0);
            cout << per << "\n";
            continue;
        }
        sort(maxs.begin(), maxs.end());

        for (int j = 0; j < n - 1; j++)
        {
            if (j < 1)
            {
                per += maxs.at(j);
            }

            per += maxs.at(j + 1) - maxs.at(j);
        }

        per += maxs.at(n - 1);

        cout << per << "\n";
    }
}
