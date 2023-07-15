#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int size;
        scanf("%d", &size);
        int digit;
        int count = 0;
        int num_ones = 0;
        int num_one_spells = 0;
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &digit);
            if (digit == 1)
            {
                count = 1;
                num_ones++;
            }

            if (num_ones % 2 == 0 && count == 1)
            {
                num_one_spells++;
                count = 0;
            }

        }

        int num_spells = size - num_one_spells;
        printf("%d\n", num_spells);
    }
}
