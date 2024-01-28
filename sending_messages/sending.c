#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long n, f, a, b;
        scanf("%lld%lld%lld%lld", &n, &f, &a, &b);
        long long prev = 0;
        long long curr;
        long long charge_used = 0;
        for (long long j = 0; j < n; j++)
        {
            scanf("%lld", &curr);
            if ((curr - prev) * a >= b)
            {
                charge_used += b;
            }

            else
            {
                charge_used += (curr - prev) * a;
            }

            prev = curr;
        }

        if (charge_used >= f)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
        }

    }
}
