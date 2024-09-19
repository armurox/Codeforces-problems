#include <stdio.h>

#define ll long long

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        ll n, s, m;
        scanf("%lld%lld%lld", &n, &s, &m);
        ll prev = 0;
        ll l, r;
        int yes = 0;
        for (ll j = 0; j < n; j++)
        {
            scanf("%lld%lld", &l, &r);
            if (l - prev >= s && !yes)
            {
                printf("YES\n");
                yes = 1;
            }
            prev = r;   
        }

        if (m - prev >= s && !yes)
            printf("YES\n");
        else if (!yes)
            printf("NO\n");
    }
}
