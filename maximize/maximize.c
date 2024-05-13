#include <stdio.h>

int gcd (int a, int b);

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x;
        scanf("%d", &x);

        printf("%d\n", x - 1);
    }
}

