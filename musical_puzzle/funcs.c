#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"


void min_num(char *arr, int size)
{
    char *used_arr = calloc((size), sizeof(char));
    int total_num;
    if (size % 2 == 0)
    {
        total_num = size / 2;
    }

    else
    {
        total_num = (size / 2) + 1;
    }

    for (int i = 0; arr[i + 1] != '\0'; i++)
    {
        for (int j = 0; j < size; j += 2)
        {
            if (arr[i] == used_arr[j] && arr[i + 1] == used_arr[j + 1])
            {
                total_num--;
            }
        }
        
    }

    printf("%d\n", total_num);
}
