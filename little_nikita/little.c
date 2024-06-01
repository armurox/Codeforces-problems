#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        if (n >= m && ((n - m) % 2 == 0))
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
