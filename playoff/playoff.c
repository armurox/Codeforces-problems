#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", (int) pow(2, n) - 1);
    }
}
