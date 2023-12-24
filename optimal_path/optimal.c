#include <stdio.h>

int main()
{
    long long t;
    scanf("%lld", &t);
    for (int i = 0; i < t; i++)
    {
        long long n, m;
        scanf("%lld%lld", &n, &m);
        printf("%lld\n", ((m * (m + 1)) / 2) + (((n * (n + 1)) / 2) - 1) * m);
    }
}
