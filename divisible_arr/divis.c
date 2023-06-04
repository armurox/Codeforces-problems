#include <stdio.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int arr_size;
        scanf("%d", &arr_size);
        int *arr = malloc(sizeof(int) * arr_size);
        int sum = 0;
        for (int j = 0; j < arr_size; j++)
        {
            arr[j] = j + 1;
            sum += j + 1;
        }
        while (sum % (arr_size) != 0)
        {
            for (int j = 0; j < arr_size; j++)
            {
                arr[j] += (j + 1);
                sum += j + 1;
                if (sum % (arr_size) == 0)
                {
                    break;
                }
            }
        }

        for (int j = 0; j < arr_size; j++)
        {
            if (j != arr_size - 1)
            {
                printf("%d ", arr[j]);
            }
            
            else
            {
                printf("%d\n", arr[j]);
            }
        }
        free(arr);
    }
}
