#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n, m;
        cin >> n >> m;
        int row, column;
        int num_collisions = 0;
        map<int, int> used_indices;
        for (int j = 0; j < m; j++)
        {
            cin >> row >> column;
            for (map<int, int>::iterator it = used_indices.begin(), x = used_indices.end(); it != x; ++it)
            {
                if (row == it -> first)
                {
                    num_collisions++;
                }

                else if (column == it -> second)
                {
                    num_collisions++;
                }
            }

            used_indices[row] = column;
        }

        if (m > n)
        {
            cout << "NO\n";
        }

        else if (m == n && num_collisions == 0)
        {
            cout << "NO\n";
        }

        else if (num_collisions > 1)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }
    }
}
