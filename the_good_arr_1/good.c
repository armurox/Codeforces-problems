#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        printf("%d\n", ((n - 1) / k + ((n - 1) % k ? 1 : 0) + 1));
    }
}
