#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int size;
        scanf("%d", &size);
        int num;
        int sum_even = 0;
        int sum_odd = 0;
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &num);
            if (num % 2 == 0)
            {
                sum_even += num;
            }

            else
            {
                sum_odd += num;
            }
        }

        if (sum_even > sum_odd)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
