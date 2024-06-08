#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n % 7 == 0)
        {
            printf("%d\n", n);
        }

        else if (n % 10 >= n % 7)
        {
            printf("%d\n", n - (n % 7));
        }

        else
        {
            printf("%d\n", n + (7 - n % 7));
        }
    }
}
