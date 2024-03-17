#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (c > b || a > d)
        {
            printf("%d\n", a + c);
        }

        else if (c <= b && c >= a)
        {
            printf("%d\n", c);
        }

        else
        {
            printf("%d\n", a);
        }
    }
}
