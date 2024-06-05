#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int m;
        scanf("%d", &m);
        int temp;
        for (int j = 1; j < n; j++)
        {
            scanf("%d", &temp);
            m |= temp;
        }

        printf("%d\n", m);
    }
}
