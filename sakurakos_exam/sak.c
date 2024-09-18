#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if ((a + (2 * b)) % 2 || (b % 2 && (a < 2 || a % 2)))
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
