#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, x;
        scanf("%d%d", &n, &x);
        int avg = 0;
        int curr;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &curr);
            avg += curr;
        }

        if ((float) avg / n == (float) x)
            printf("YES\n");
        
        else
            printf("NO\n");
    }
}
