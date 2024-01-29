#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long a, b;
        scanf("%lld%lld", &a, &b);
        if ((a + b) % 2)
        {
            printf("Alice\n");
        }

        else
        {
            printf("Bob\n");
        }
    }
}
