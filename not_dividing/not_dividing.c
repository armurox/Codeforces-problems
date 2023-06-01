#include <stdio.h>
#include <stdlib.h> // for malloc

void not_divide(int *arr, int size);

int main()
{
    // Get number of cases from user
    int case_num;
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        // Initialize array
        int arr_size;
        scanf("%d", &arr_size);
        int *array = malloc(sizeof(int) * arr_size);
        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d", array + j);
        }

        // Apply the not divide rule to the array and print it
        not_divide(array, arr_size);
        for (int j = 0; j < arr_size; j++)
        {
            if (j != arr_size - 1)
            {
                printf("%d ", array[j]);
            }
            
            else
            {
                printf("%d\n", array[j]);
            }
        }
    }
}

void not_divide(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        // Need to increment all ones, as they divide everything
        if (arr[i] == 1)
        {
            arr[i]++;
        }

        if (arr[i + 1] % arr[i] == 0)
        {
            arr[i + 1]++;
        }
    }
}
