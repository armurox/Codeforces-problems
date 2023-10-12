#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cn;
    scanf("%d", &cn);
    for (int i = 0; i < cn; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        int first = abs(a - 1);
        int second = 0;
        if (c == 1)
        {
            second = (abs(b - c));
        }

        else
        {
            second = abs(b - c) + abs(c - 1);
        }

        if (first < second)
        {
            printf("%d\n", 1);
        }

        else if (second < first)
        {
            printf("%d\n", 2);
        }

        else
        {
            printf("%d\n", 3);
        }
    }
}
