#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        int num_moves = 0;

        if (b > d)
        {
            printf("%d\n", -1);
            continue;
        }
        while (b != d)
        {
            a++;
            b++;
            num_moves++;
        }

        if (a < c)
        {
            printf("%d\n", -1);
            continue;
        }

        while (a != c)
        {
            a--;
            num_moves++;
        }
        printf("%d\n", num_moves);

    }
}
