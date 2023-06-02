#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Get number of cases from user
    int case_num;
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        int arr_size;
        scanf("%d", &arr_size);

        int curr_blank = 0;
        int largest_blank = 0;
        int *arr = malloc(sizeof(int) * arr_size);
        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d", arr + j);
        }

        for (int j = 0; j < arr_size; j++)
        {
            if (arr[j] == 0)
            {
                curr_blank++;
            }

            if (arr[j] == 1)
            {
                curr_blank = 0;
            }

            if (curr_blank > largest_blank)
            {
                largest_blank = curr_blank;
            }
        }
        
        printf("%d\n", largest_blank);
        free(arr);
    }
}
