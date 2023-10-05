#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        size_t n;
        cin >> n;
        size_t *arr_1 = new size_t[n];
        size_t *arr_2 = new size_t[n];
        size_t num;
        for (size_t j = 0; j < n; j++)
        {
            cin >> num;
            arr_1[j] = num;
        }

        for (size_t j = 0; j < n; j++)
        {
            cin >> num;
            arr_2[j] = num;
        }
        size_t min_1 = *min_element(arr_1, arr_1 + n);
        size_t min_2 = *min_element(arr_2, arr_2 + n);
        size_t sum = min(n * min_1 + accumulate(arr_2, arr_2 + n, 0LL), n * min_2 + accumulate(arr_1, arr_1 + n, 0LL));
        delete[] arr_1;
        delete[] arr_2;

        cout << sum << "\n";
    }
}
