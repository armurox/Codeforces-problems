#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char *s = calloc(10, sizeof(char));
        scanf("%s", s);
        char start = s[0];
        int yes = 0;
        for (int j = 1; s[j] != '\0'; j++)
        {
            if (s[j] != start)
            {
                printf("YES\n");
                yes = 1;
                s[0] = s[j];
                s[j] = start;
                printf("%s\n", s);
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
