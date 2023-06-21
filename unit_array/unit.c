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
        int *arr = malloc(sizeof(int) * size);
        int sum;
        int num_negs = 0;
        int min_moves = 0;
        for (int j = 0; j < size; j++)
        {
            scanf("%d", arr + j);
            if (j == 0)
            {
                sum = arr[j];
            }

            else
            {
                sum += arr[j];
            }

            if (arr[j] == -1)
            {
                num_negs++;
            }
        }

        while (sum < 0 || num_negs % 2 != 0)
        {
            min_moves++;
            sum+= 2;
            num_negs--;
        }

        printf("%d\n", min_moves);

    }
}
