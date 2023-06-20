#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int num_candies;
        scanf("%d", &num_candies);
        if (num_candies % 2 == 0)
        {
            printf("%d\n", -1);
            continue;
        }

        int num_moves = 0;
        int *moves = malloc(1 * sizeof(int));
        int *reverse_moves = malloc(1 * sizeof(int));
        for (int j = num_candies; j > 1; j = (num_candies - 1) / 2)
        {
            
        }
    }
}