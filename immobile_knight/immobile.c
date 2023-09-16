#include <stdio.h>

int main()
{
    int cn;
    scanf("%d", &cn);
    for (int i = 0; i < cn; i++)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        if (n == 2 && m == 3)
        {
            printf("%d %d\n", 1, 2);
        }

        else if (n == 3 && m == 2)
        {
            printf("%d %d\n", 2, 1);
        }

        else if (n == 3 && m == 3)
        {
            printf("%d %d\n", 2, 2);
        }

        else
        {
            printf("%d %d\n", n, m);
        }
    }
}
