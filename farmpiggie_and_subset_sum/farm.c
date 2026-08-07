#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = n; j > 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
