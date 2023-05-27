#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

int main()
{
    // Identify number of cases
    int case_num;
    scanf("%d", &case_num);
 
    int arr_size;
    int *arr_a;
    
    for (int i = 0; i < case_num; i++)
    {
        while (scanf("%d", &arr_size) != 1)
        {
            printf("Please input an integer\n");
        }
        // Initialize array
        arr_a = array_create(arr_size);
 
        // Create array
        for (int i = 0; i < arr_size; i++)
        {
            if (scanf("%d", (arr_a + i)) != 1)
            {
                printf("Please fill up the array to the indicated size\n");
            }
        }
 
        is_possible(arr_a, arr_size);
 
        // Free up the memory space
        free(arr_a);
    }
}
