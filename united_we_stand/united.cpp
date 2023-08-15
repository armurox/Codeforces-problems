#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    // Read cases
    for (int i = 0; i < case_num; i++)
    {
        // Stores array a
        int n;
        cin >> n;
        int *arr = new int[n];
        int max = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        // Count the number of max numbers
        int count_max = count(arr, arr + n, max);
        int count_others = n - count_max;

        // If the whole array is made up of equal numbers, then it is not possible to created the required arrays
        if (count_max == n)
        {
            cout << -1 << "\n";
        }

        else
        {
            cout << count_others << " " << count_max << "\n";
            for (int j = 0; j < n; j++)
            {
                if (arr[j] != max)
                {
                    cout << arr[j] << " ";
                }
            }

            cout << "\n";

            for (int j = 0; j < count_max; j++)
            {
                cout << max << " ";
            }

            cout << "\n";
        }

        delete[] arr;
    }
}


