#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a % 2 && b % 2)
        {
            printf("NO\n");
        }

        else if (a % 2 == 0 && b % 2 == 0)
        {
            printf("YES\n");
        }

        else if ((a % 2 == 0 && a / 2 != b) || (b % 2 == 0 && b / 2 != a))
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
