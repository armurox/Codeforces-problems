#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        for (int j = 1; j < k + 1; j++)
        {
            printf("%d ", j);
        }

        for (int j = n; j >= k + 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}
