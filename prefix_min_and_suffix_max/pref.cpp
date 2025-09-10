#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        vector<int> v;
        string s;
        int temp;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        auto min_it{min_element(v.begin(), v.end())};
        auto max_it{max_element(v.begin(), v.end())};
        int max_value{*max_it};
        int min_value{*min_it};
        for (int j = 0; j < n; j++)
        {
            if (v[j] == min_value || v[j] == max_value)
                s += "1";
            else if (j == 0 && v[j] < v[n - 1])
                s += "1";
            else if ( j == n - 1 && v[0] < v[j])
                s += "1";
            else
                s += "0";
        }

        cout << s << '\n';


    }
}
