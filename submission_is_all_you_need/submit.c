#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int ans = 0;
        int curr;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &curr);
            ans += curr;
            if (curr == 0)
                ans += 1;
        }

        printf("%d\n", ans);
    }
}
