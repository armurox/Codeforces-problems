#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        int *arr = (int*) malloc(sizeof(int) * n);
        int diff;
        int max_diff = 0;
        int second_max_diff = 0;
        int index = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", arr + j);
            if (j != 0)
            {
                diff = arr[j] - arr[j - 1];
                if (max_diff < diff)
                {
                    max_diff = diff;
                    index = j;
                }
            }
        }

        if (1440 - arr[n - 1] >= 120)
        {
            printf("YES\n");
            continue;
        }

        else if (max_diff > 239)
        {
            printf("YES\n");
            continue;
        }

        else if (max_diff < 120)
        {
            printf("NO\n");
            continue;
        }

        else
        {
            for (int j = 1; j < n; j++)
            {
                diff = arr[j] - arr[j - 1];
                if (diff > second_max_diff && diff <= max_diff && j != index)
                {
                    second_max_diff = diff;
                }
            }

            if (second_max_diff < 120)
            {
                printf("NO\n");
            }

            else
            {
                printf("YES\n");
            }
        }

        free(arr);
    }
}
