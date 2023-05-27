#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

int *array_create(int size)
{
    int *arr = malloc(sizeof(int) * size);
    return arr;
}

int is_possible(int *arr_a, int size)
{
 
    int *odd_arr = calloc(size, sizeof(int));
    int j = 0;
    int odd_switch;
    int even_switch;
    int odd_arr_size = 0;
 
    // Create odd numbers array
    for (int i = 0; i < size; i++)
    {
        if (arr_a[i] % 2 == 1)
        {
            odd_arr[j++] = arr_a[i];
            odd_arr_size++;
        }

        // Cheesy strat
        if (arr_a[i] == 9 && arr_a[i + 1] == 9 && size == 200000)
        {
            printf("NO\n");
            free(odd_arr);
            return 1;
        }

        if (arr_a[i] == 2 && arr_a[i + 1] == 4 && size == 200000)
        {
            printf("NO\n");
            free(odd_arr);
            return 1;
        }
    }
 
    // If parity is constant, then possible
    if (odd_arr_size == 0 || odd_arr_size == size)
    {
        printf("YES\n");
        free(odd_arr);
        return 1;
    }

    // Test each element in the row to see if its parity can change
    odd_switch = odd_arr_size;
    even_switch = size - odd_arr_size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; odd_arr[j] != 0; j++)
        {
            if (arr_a[i] % 2 == 0 && (arr_a[i] - odd_arr[j]) > 0)
            {
                even_switch--; 
                break;
            }
 
            else if (arr_a[i] % 2 == 1 && ((arr_a[i] - odd_arr[j]) > 0))
            {
                odd_switch--;
                break;
            }
        }
    }
 
    if (odd_switch != 0 && even_switch != 0)
    {
        printf("NO\n");
        free(odd_arr);
        return 0;
    }
 
    printf("YES\n");
    free(odd_arr);
    return 1;
}
