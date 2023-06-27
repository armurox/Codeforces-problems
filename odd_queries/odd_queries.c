#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n, q;
        scanf("%d%d", &n, &q);
        int *arr = malloc(sizeof(int) * n);
        int sum = 0;
        int *temp_arr = malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", arr + j);
            sum += arr[j];
        }

        for (int j = 0; j < n; j++)
        {
            temp_arr[j] = arr[j];
        }

        for (int j = 0; j < q; j++)
        {
            int l, r, k;
            scanf("%d%d%d", &l, &r, &k);
            for (int m = l - 1; m < r; m++)
            {
                temp_arr[m] = k;
                sum -= arr[m];
                sum += k;
            }

            if (sum % 2 != 0)
            {
                printf("YES\n");
            }

            else
            {
                printf("NO\n");
            }

            sum = 0;
            for (int m = 0; m < n; m++)
            {

                temp_arr[m] = arr[m];
                sum += arr[m];
            }
        }
        free(arr);
        free(temp_arr);
    }
}
