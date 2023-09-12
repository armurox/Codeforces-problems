#include <stdio.h>

int main()
{
    int cn;
    scanf("%d", &cn);
    for (int i = 0; i < cn; i++)
    {
        int n;
        scanf("%d", &n);
        if (n > 3)
        {
            printf("%d %d", n - 1, n);
            for (int j = 1; j < n - 1; j++)
            {
                printf(" %d", j);
            }
            printf("\n");
        }

        else if (n == 2)
        {
            printf("%d %d\n", 2, 1);
        }

        else
        {
            printf("%d\n", -1);
        }
    }
}
