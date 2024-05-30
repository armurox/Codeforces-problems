#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long a, b, c, d, e, f;
        scanf("%lld%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e, &f);
        if (b == d && b != 0)
        {
            printf("%lld\n", llabs(a - c));
        }

        else if (b == f && b != 0)
        {
            printf("%lld\n", llabs(a - e));
        }

        else if (d == f && d != 0)
        {
            printf("%lld\n", llabs(c - e));
        }

        else
        {
            printf("%d\n", 0);
        }
    }
}
