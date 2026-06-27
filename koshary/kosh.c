#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        const char *ans = (x % 2 && y % 2) ? "NO\n" : "YES\n";
        printf("%s", ans);
    }
}

