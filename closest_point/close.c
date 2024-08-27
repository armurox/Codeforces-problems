#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a, b;
        if (n == 2)
        {
            scanf("%d%d", &a, &b);
            if (b - a > 1)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a);
            }
            printf("NO\n");
        }

    }
}
