#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char *s = n % 2 ? "Kosuke" : "Sakurako";
        printf("%s\n", s);
    }
}
