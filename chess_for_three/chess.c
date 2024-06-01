#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if ((a + b + c) % 2)
        {
            printf("%d\n", -1);
        }

        else
        {
            printf("%d\n", ((a + b + c) / 2) < a + b ? (a + b + c) / 2 : a + b);
        }
    }
}
