#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        if (m < n)
        {
            printf("%d\n", n + (2 * m) - 2);
        }

        else if (m == n && m == 1)
        {
            printf("%d\n", 0);
        }
        
        else
        {
            printf("%d\n", m + (2 * n) - 2);
        }
    }
}
