#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        printf("%s\n", (y < -1 ) ? "NO" : "YES");
    }
}

