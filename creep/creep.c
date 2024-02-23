#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0 ; i < t; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        while(a > 0 && b > 0)
        {
            printf("10");
            a--;
            b--;
        }
        while (a > 0)
        {
            printf("0");
            a--;
        }

        while(b > 0)
        {
            printf("1");
            b--;
        }

        printf("\n");
    }
}
