#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int *a = malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", a + j);
        }
        int yes = 1;
        int first = a[0] % 2;
        int second = a[1] % 2;
        for (int j = 2; j < n; j++)
        {
            if (j % 2 == 0)
            {
                if (a[j] % 2 != first)
                {
                    printf("NO\n");
                    yes = 0;
                    break;
                }
            }

            else if (a[j] % 2 != second)
            {
                printf("NO\n");
                yes = 0;
                break;
            }
        }

        if (yes)
            printf("YES\n");
        free(a);
    }
}
