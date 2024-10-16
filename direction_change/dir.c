#include <stdio.h>

#define ll long long

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        ll a, b;
        scanf("%lld%lld", &a, &b);
        ll diff = a > b ? a - b : b - a;
        if ((a == 1 || b == 1) && (diff > 1))
            printf("%d\n", -1);
        else
            printf("%lld\n", (a - 1) + (b - 1) + (diff % 2 ? diff - 1 : diff));
    }
}
