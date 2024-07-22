#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}
