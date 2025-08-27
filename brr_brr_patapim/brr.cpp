#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int n;
    int elem;
    int elem_sum{ 0 };
    int size;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> v;
        elem_sum = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> elem;
                if (j == 0 ||  k == n - 1)
                {
                    v.push_back(elem);
                    elem_sum += elem;
                }
            }
        }

        cout << (int) (2 * n * (2 * n + 1)) / 2 - elem_sum << " ";
        size = v.size();
        for (int j = 0; j < size; j++)
        {
            cout << v[j] << " ";
        }
        cout << '\n';

    }    
}
