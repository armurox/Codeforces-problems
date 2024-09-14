#include <stdio.h>

#define ll long long

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        ll l, r;
        scanf("%lld%lld", &l, &r);
        ll n = 1;
        ll ans = 1;
        for (ll curr = l; curr < r; curr += n)
        {
            ans += 1;
            n += 1;
        }
        
        printf("%lld\n", ans);
    }
}
