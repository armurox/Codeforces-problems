#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        for (int j = n; j > m; j--)
            printf("%d ", j);
        for (int j = 1; j < m + 1; j++)
            printf("%d ", j);
        printf("\n");
    }
}
