#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        int num_odds = 0;
        for (int j = l; j < r + 1; j++)
            num_odds += (j % 2) ? 1 : 0;
        printf("%d\n", num_odds / 2);
    }
}
