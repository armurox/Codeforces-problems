#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char *s = malloc(n);
        int yes = 0;
        for (int j = 0; j < n; j++)
        {
            scanf(" %c", s + j);
        }
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '0')
            {
                yes = 1;
                printf("YES\n");
                break;
            }
        }

        if (!yes)
        {
            printf("NO\n");
        }

        free(s);
    }
}
