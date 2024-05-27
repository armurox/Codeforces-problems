#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        int leftover = (x % 7) ? 1 : 0;
        int extra = ((y / 2 + y % 2) - (x / 7 + leftover)) >= 0 ? 0 : abs(((y / 2 + y % 2) - (x / 7 + leftover)));
        printf("%d\n", y / 2 + y % 2 + extra);
    }
}
