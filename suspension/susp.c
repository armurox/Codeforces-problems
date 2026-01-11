#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, y, r;
        scanf("%d%d%d", &n, &y, &r);
        y /= 2;
        printf("%d\n", ((y + r > n) ? n : y + r));
    }
}
