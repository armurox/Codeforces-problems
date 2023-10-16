#include <stdio.h>

int main()
{
    long long n, m;
    scanf("%lld%lld", &n, &m);
    if (m == 1)
    {
        printf("%lld\n", n - 1);
    }

    else
    {
        printf("%lld\n", n * (m - 1));
    }
}
