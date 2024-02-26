#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        int num_g = 0;
        if (b > a )
        {
            num_g++;
        }

        if ( c > a)
        {
            num_g++;
        }

        if (d > a)
        {
            num_g++;
        }

        printf("%d\n", num_g);
    }
}
