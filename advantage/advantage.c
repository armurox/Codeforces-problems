#include <stdio.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        int *arr = malloc(sizeof(int) * n);
        int max_num = 0;
        int second_max = 0;
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", arr + j);

            if (arr[j] > max_num)
            {
                max_num = arr[j];
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == max_num)
            {
                count++;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (arr[j] > second_max && arr[j] < max_num)
            {
                second_max = arr[j];
            }
        }

        if (count > 1)
        {
            second_max = max_num;
        }

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == max_num)
            {
                printf("%d ", max_num - second_max);
            }

            else
            {
                printf("%d ", arr[j] - max_num);
            }
        }
        printf("\n");
        free(arr);
    }
}
