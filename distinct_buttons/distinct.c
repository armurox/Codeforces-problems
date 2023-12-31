#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int *arr = calloc(4, sizeof(int));
        int x, y;
        for (int j = 0; j < n; j++)
        {
            scanf("%d%d", &x, &y);
            if (x > 0)
            {
                arr[0] = 1;
            }

            if (x < 0)
            {
                arr[1] = 1;
            }

            if (y < 0)
            {
                arr[2] = 1;
            }

            if (y > 0)
            {
                arr[3] = 1;
            }
        }

        int arr_sum = 0;
        for (int j = 0; j < 4; j++)
        {
            arr_sum += arr[j];
        }

        free(arr);

        if (arr_sum == 4)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
        }
    }
}
