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
        int *nums = malloc(sizeof(int) * n);
        int max = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", nums + j);
        }

        int num_moves = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (nums[j] > nums[j + 1] && nums[j] > max)
            {
            
                num_moves = nums[j];
                max = num_moves;
            }
        }

        printf("%d\n", num_moves);
    }
}
