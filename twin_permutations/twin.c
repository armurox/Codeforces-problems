#include <stdio.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int size;
        scanf("%d", &size);
        int *init = malloc(sizeof(int) * size);
        for (int j = 0; j < size; j++)
        {
            scanf("%d", init + j);
        }

        int *reverse = malloc(sizeof(int) * size);
        for (int j = 0; j < size; j++)
        {
            reverse[j] = init[size - 1 - j];
        }

        int *sum_arr = malloc(sizeof(int) * size);
        int *b = malloc(sizeof(int) * size);
        for (int j = 0; j < size; j++)
        {
            sum_arr[j] = size - j;
        }

        for (int j = 0; j < size; j++)
        {
            if (j == 0)
            {
               b[j] = reverse[j] + sum_arr[j];
               sum_arr[j] = 40000;
               continue;
            }

            for (int k = 0; k < size; k++)
            {
                if (reverse[j] + sum_arr[k] <= b[j - 1])
                {
                    b[j] = reverse[j] + sum_arr[k];
                    printf("%d ", b[j]);
                    sum_arr[k] = 40000;
                    break;
                }
            }
        }
        
        // Remember to reverse b once done!
        int *b_rev = malloc(sizeof(int) * size);
        for (int j = 0; j < size; j++)
        {
            b_rev[j] = b[size - 1 - j];
        }

        
        for (int j = 0; j < size; j++)
        {
            // b_rev[j] = b_rev[j] - init[j];
            // printf("%d ", b_rev[j]);
        }
        printf("\n");
        free(b);
        free(reverse);
        free(sum_arr);
        free(init);
        free(b_rev);
    }
}
