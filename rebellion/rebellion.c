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
        int num_moves = 0;
        int *arr = malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", arr + j);
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[j] > arr[n - 1 - k] && n - 1 - k > j)
                {
                    arr[n - 1 - k] = arr[j];
                    num_moves++;
                    k++;
                    break;
                }
            }
        }

        printf("%d\n", num_moves);
        free(arr);
    }
}
