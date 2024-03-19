#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a;
        vector<int> b;
        int num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            a.push_back(num);
        }

        for (int j = 0; j < m; j++)
        {
            cin >> num;
            b.push_back(num);
        }

        int num_choices = 0;
        for (int j = 0; j < n; j++)
        {
            for (int l = 0; l < m; l++)
            {
                if (a[j] + b[l] <= k)
                {
                    num_choices++;
                }
            }
        }

        cout << num_choices << "\n";
    }
}
