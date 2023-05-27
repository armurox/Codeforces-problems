#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"


void min_num(char *arr, int size)
{
    char *used_arr = calloc((size), sizeof(char));
    int total_num = 0;
    int x = 0;
    for (int i = 0; arr[i + 1] != '\0'; i++)
    {
        // printf("test1\n");
        for (int j = 0; j < size; j += 2)
        {
            if (arr[i] == used_arr[j] && arr[i + 1] == used_arr[j + 1])
            {
                // printf("test\n");
            }
        }

        used_arr[x] = arr[i];
        used_arr[x + 1] = arr[i + 1];
        x += 2;
    }

    printf("%d\n", total_num);
    free(used_arr);
}
