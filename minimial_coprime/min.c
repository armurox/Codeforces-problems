#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long a, b;
        scanf("%lld%lld", &a, &b);
        printf("%lld\n", (a == b && a == 1) ? 1 : b - a);
    }
}
