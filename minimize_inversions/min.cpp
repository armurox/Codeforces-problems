#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        int temp;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            b.push_back(temp);
        }

        int num_inv = 0;
        int num_non = 0;
        int temp_b;
        int swap;
        int swaps;
        for (int first_index = 0; first_index < n - 1; first_index++)
        {
            num_inv = 0;
            num_non = 0;
            swaps = 0;
            for (int j = first_index + 1; j < n; j++)
            {
                if (a[first_index] <= a[j])
                {
                    num_non++;
                }

                else
                {
                    num_inv++;
                }

                if (b[first_index] <= b[j])
                {
                    num_non++;
                }

                else
                {
                    num_inv++;
                }

                if (num_inv <= num_non)
                {
                    num_inv = 0;
                    num_non = 0;
                    continue;
                }

                else
                {
                    num_inv = 0;
                    num_non = 0;
                    swap = j;
                    swaps++;
                }
            }

            if (swaps)
            {
                temp = a[first_index];
                temp_b = b[first_index];
                a[first_index] = a[swap];
                b[first_index] = b[swap];
                a[swap] = temp;
                b[swap] = temp_b;
                first_index--;
            }
        }

        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }

        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << b[j] << " ";
        }

        cout << "\n";
        

    }
}