#include <stdio.h>

#define ll long long


int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        ll n, m, r, c;
        scanf("%lld%lld%lld%lld", &n, &m, &r, &c);
        printf("%lld\n", m * (n - r) + (m - 1) * (n - r) + (m - c));
    }
}
