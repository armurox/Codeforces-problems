#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char *s = (n % 3) ? "First" : "Second";
        printf("%s\n", s);
    }
}
