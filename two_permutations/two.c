#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, a, b;
        scanf("%d%d%d", &n, &a, &b);
        char* ans = ((a == b && b == n) || a + b < n - 1) ? "YES" : "NO";
        printf("%s\n", ans);
    }
}
