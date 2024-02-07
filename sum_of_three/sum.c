#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if ((n >= 1 && n <= 6) || n == 9)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
            if (((n - 3) % 3))
            {
                printf("%d %d %d\n", 1, 2, n - 3);
            }

            else
            {
                printf("%d %d %d\n", 1, 4, n - 5);
            }
        }
    }
}
