#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix;
        vector<int> v_inner;
        int temp;
        bool works = true;
        for (int j = 0; j < n; j++)
        {
            v_inner.clear();
            for (int k = 0; k < m; k++)
            {
                cin >> temp;
                v_inner.push_back(temp);
            }

            matrix.push_back(v_inner);
        }

        for (int j = 1; j < n; j++)
        {
            for (int k = 1; k < m; k++)
            {
                if (matrix[j][k] - matrix[j][k - 1] != matrix[j - 1][k] - matrix[j - 1][k - 1])
                    works = false;
            }
        }
        if (!works)
            cout << -1 << '\n';
        else
        {
            v_inner.clear();
            for (int k = 0; k < n; k++)
            {
                v_inner.push_back(matrix[k][0]);
            }

            unordered_map<int, int> m;
            for (int j = 0; j < n; j++)
            {
                m[v_inner[j]] = j + 1;
            }

            sort(v_inner.begin(), v_inner.end());
            for (int j = 0; j < n; j++)
            {
                cout << m[v_inner[j]] << ' ';
            }

            cout << '\n';

        }


    }
}
