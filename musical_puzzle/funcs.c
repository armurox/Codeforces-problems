#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"


void min_num(char *arr, int size)
{
    char *used_arr = calloc(((2 * size)), sizeof(char));
    int total_num = 0;
    int x = 0;
    int check = 0;
    for (int i = 0; arr[i + 1] != '\0'; i++)
    {
        // Check if current melody is in used array
        for (int j = 0; j < 2 * size; j += 2)
        {
            if (arr[i] == used_arr[j] && arr[i + 1] == used_arr[j + 1])
            {
                check++;
                break;
            }
        }

        // Increment number of melodies required and add to used array
        if (check == 0)
        {
            used_arr[x] = arr[i];
            used_arr[x + 1] = arr[i + 1];
            x += 2;
            total_num++;
        }

        check = 0;
    }

    printf("%d\n", total_num);
    free(used_arr);
}
