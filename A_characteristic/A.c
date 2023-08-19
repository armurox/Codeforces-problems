#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        int n;
        int k;
        int yes = 0;
        scanf("%d%d", &n, &k);
        for (int j = 1; j <= n; j++)
        {
            if ((j * (j - 1)) / 2 + ((n - j)*(n - j -1)) / 2 == k)
            {
                yes = 1;
                printf("YES\n");
                for (int m = 0; m < j; m++)
                {
                    printf("%d ", 1);
                }

                for (int m = j; m < n; m++)
                {
                    printf("%d ", -1);
                }
                printf("\n");
                break;
            }
        }

        if (!yes)
        {
            printf("NO\n");
        }
    }
}
