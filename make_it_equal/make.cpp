#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int temp;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> s;
        vector<int> t;
        bool no = false;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            s.push_back(min(temp % k, (k - (temp % k)) % k));
        }

        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            t.push_back(min(temp % k, (k - (temp % k)) % k));
        }

        unordered_map<int, int> u{};
        
        for (int j = 0; j < n; j++)
        {
                u[s[j]] += 1;
                u[t[j]] -= 1;
        }
        
        for (const auto& pair : u)
        {
            if (pair.second != 0)
                no = true;
        }


        cout << ((no) ? "NO\n" : "YES\n");


    }
}
