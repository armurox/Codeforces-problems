#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long x, y;
        scanf("%lld%lld", &x, &y);
        const char *ans = (y / x == 2) ? "NO\n" : "YES\n";
        printf("%s", ans);
    }
}

