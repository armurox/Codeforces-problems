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
        int *arr = malloc(sizeof(int) * size);
        for (int j = 0; j < size; j++)
        {
            scanf("%d", arr + j);
        }

        int max = -1000000000;
        for (int j = 0; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[j] * arr[k] > max)
                {
                    max = arr[j] * arr[k];
                }
            }
        }

        printf("%d\n", max);
    }
}