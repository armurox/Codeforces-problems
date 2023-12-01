#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int num;
        int yes = 1;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num);
            if (j == 0 && num != 1)
            {
                yes = 0;
            }
        }

        if (yes)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
