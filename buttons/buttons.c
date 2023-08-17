#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a > b)
        {
            printf("First\n");
        }

        else if (b > a)
        {
            printf("Second\n");
        }

        else if (c % 2)
        {
            printf("First\n");
        }

        else
        {
            printf("Second\n");
        }
    }
}
