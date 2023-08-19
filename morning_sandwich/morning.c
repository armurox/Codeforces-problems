#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int b, c, h;
        scanf("%d%d%d", &b, &c, &h);
        if (b <= c + h)
        {
            printf("%d\n", 2 * b - 1);
        }

        else
        {
            printf("%d\n", 2 * (c + h) + 1);
        }
    }
}
