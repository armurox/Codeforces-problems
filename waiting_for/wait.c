#include <stdio.h>

#define ll long long

int main(void)
{
    int n;
    scanf("%d", &n);
    ll sum_p = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        ll l;
        scanf(" %c%lld", &c, &l);
        sum_p += (c == 'P') ? l : -l;
        if (c == 'B')
            printf("%s\n", (sum_p < 0) ? "YES" : "NO");
            if (sum_p < 0)
                sum_p = 0;
        
    }
}
