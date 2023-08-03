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
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", arr + j);
            sum += arr[j];
        }

        int increased = 0;
        int num_ones = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == -1 && arr[j + 1] == -1)
            {
                sum += 4;
                increased = 1;
                break;
            }

            if (arr[j] == 1)
            {
                num_ones++;
            }

            if (j == n - 2 && arr[j + 1] == 1)
            {
                num_ones++;
            }
        }

        if (increased == 0 && num_ones == n)
        {
            sum -= 4;
        }

        printf("%d\n", sum);

        free(arr);
    }
}
