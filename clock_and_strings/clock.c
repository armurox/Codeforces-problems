#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if ((c == a || c == b || d == b || a == d) || (((c > a && c > b) || (c < a && c < b)) && ((d > b && d < a) || (d < b && d > a))) || (((d > a && d > b) || (d < a && d < b)) && ((c > b && c < a) || (c < b && c > a))))
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
