#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Find out number of cases that program should run for from user
    int case_num;
    scanf("%d", &case_num);

    // Program runs until cases are exhausted
    for (int i = 0; i < case_num; i++)
    {
        int arr_size;
        scanf("%d", &arr_size);

        char *arr = calloc(arr_size + 1, sizeof(char));
        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d", arr + i);
        }
    }

    min_num(arr, arr_size);
}