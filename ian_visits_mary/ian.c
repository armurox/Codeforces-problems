#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long x, y;
        scanf("%lld%lld", &x, &y);
        printf("%d\n%lld %d\n%lld %lld\n", 2, x - 1, 1, x, y);
    }
}
