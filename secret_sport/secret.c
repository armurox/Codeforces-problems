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
        scanf("%s", s);
        printf("%c\n", s[n - 1]);
        free(s);
    }
}
