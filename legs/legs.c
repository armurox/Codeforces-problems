#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", n / 4 + (n % 4) / 2);
    }
}
