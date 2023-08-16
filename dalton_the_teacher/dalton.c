#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        int num;
        int num_moves = 0;
        // Run through the chair number, identifying integers that are in the wrong place
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num);
            if (num == j + 1)
            {
                num_moves++;
            }
        }

        num_moves = (num_moves / 2) + (num_moves % 2);
        printf("%d\n", num_moves);
    }
}
