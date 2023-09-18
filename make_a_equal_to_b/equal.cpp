#include <iostream>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        int num_1_ones = 0;
        int num_2_ones = 0;
        int *arr_1 = new int[n];
        int *arr_2 = new int[n];
        bool invalid = false;
        for (int j = 0; j < n; j++)
        {
            cin >> arr_1[j];
            if (arr_1[j] == 1)
            {
                num_1_ones++;
            }
        }

        for (int j = 0; j < n; j++)
        {
            cin >> arr_2[j];
            if (arr_2[j] == 1)
            {
                num_2_ones++;
            }
        }

        int diff = 0;
        while (num_1_ones > num_2_ones)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr_1[j] != arr_2[j] && arr_1[j] == 1)
                {
                    arr_1[j] = 0;
                    num_1_ones--;
                    diff++;
                    break;
                }
            }
        }

        while (num_2_ones > num_1_ones)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr_1[j] != arr_2[j] && arr_2[j] == 1)
                {
                    arr_1[j] = 1;
                    num_2_ones--;
                    diff++;
                    break;
                }
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (arr_1[j] != arr_2[j])
            {
                invalid = true;
                break;
            }
        }

        (invalid) ? cout << diff + 1 << "\n" : cout << diff << "\n";
    }
}
