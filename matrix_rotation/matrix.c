#include <stdio.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int x_1, x_2, x_3, x_4;
        scanf("%d%d%d%d", &x_1, &x_2, &x_3, &x_4);
        if (((x_1 < x_2 && x_3 < x_4) || (x_1 > x_2 && x_3 > x_4)) && ((x_1 < x_3 && x_2 < x_4) || (x_1 > x_3 && x_2 > x_4)))
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
