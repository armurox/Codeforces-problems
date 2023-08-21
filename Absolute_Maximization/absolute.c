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
        int max_val = 0;
        int min_val = 1024;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", arr + j);
            if (arr[j] > max_val)
            {
                max_val = arr[j];
            }

            if (arr[j] < min_val)
            {
                min_val = arr[j];
            }
        }

        for (int j = 0; j < n; j++)
        {
            max_val |= arr[j];
            min_val &= arr[j];
        }
        printf("%d\n", max_val - min_val);
        free(arr);
    }
}
