#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    unordered_map<int, int> m;
    vector<int> v;
    string s;
    cin >> s;
    int size = s.length();
    int prefix_balance = 0;
    m[0] = 0;
    v.push_back(0);
    for (int i = 1; i < size; i++)
    {
        prefix_balance += (s[i - 1] == '(') ? 1 : -1;
        m[i] = prefix_balance;
        v.push_back(i);
    }

    sort(v.begin(), v.end(), [&m](int i, int j) {return m[i] < m[j];});
    map<int, int> m1;
    bool start = false;
    int init;
    int final = 0;
    for (size_t j = 0; j < v.size() - 1; j++)
    {
        if (m[v[j]] == m[v[j + 1]] && !start)
        {
            start = true;
            init = j;
            m1[j] = 1;
        }

        else if (m[v[j]] == m[v[j + 1]])
        {
            m1[init]++;
            final = init + m1[init] + 1;
        }

        else
        {
            m1[final] = 0;
            start = false;
        }
    }

    for (map<int, int>::iterator it = m1.begin(); it != m1.end(); ++it)
    {
        if (it -> second > 0)
        {
            for (int j = it -> first + it -> second; j >= it -> first; j--)
            {
                cout << s[v[j]];
            }
        }

        else
        {
            cout << s[v[it -> first]];
        }
    }

    cout << "\n";

}
