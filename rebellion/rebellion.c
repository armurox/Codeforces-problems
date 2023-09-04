#include <stdio.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        int num_moves = 0;
        int num_zeros;
        int num_ones;
        int unordered;
        int curr_num;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &curr_num);
            if (curr_num == 1)
            {
                num_ones++;
                unordered = 1;
            }

            else if (curr_num == 0 && unordered == 1)
            {
                num_zeros++;
            }
        }

        printf("%d\n", num_moves);
    }
}
