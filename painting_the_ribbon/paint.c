#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        char *ans = (k >= (n * (m - 1)) / m) ? "NO" : "YES";
        printf("%s\n", ans);
    }
}
