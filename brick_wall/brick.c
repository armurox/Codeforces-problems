#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        printf("%d\n", n * (m / 2));
    }
}
