#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int n, m;
    char temp;
    for (int i = 0; i < t; i++)
    {
        vector<char> a, b;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        cin >> m;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            if (temp == 'D')
                a.push_back(b[j]);
            else
                a.insert(a.begin(), b[j]);
        }

        for (int j = 0; j < m + n; j++)
            cout << a[j];
        cout << '\n';

            
    }
}
