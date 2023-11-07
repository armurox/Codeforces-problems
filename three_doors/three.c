#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int k;
        scanf("%d", &k);
        int d[3];
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", d + j);
        }

        if (d[k - 1] == 0)
        {
            printf("NO\n");
        }

        else if (d[d[k - 1] - 1] == 0)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
        }
    }
}
