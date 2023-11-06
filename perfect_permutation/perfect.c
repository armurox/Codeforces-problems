#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        for (int j = 2; j < n + 1; j++)
        {
            printf("%d ", j);
        }
        printf("%d\n", 1);
    }
}
