#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_correct(int *expected_temp, int *act_temp, int size, int allowed_diff);
void swap(int *one, int *two);

// Struct that will contain array of valid indices for each current index
typedef struct Valid
{
    int *indices;
}Valid;

int main()
{
    // Get number of test cases from user
    int case_num;
    scanf("%d ", &case_num);

     for (int i = 0; i < case_num; i++)
    {
        // Get array size and max difference between expected and actual temperature from user
        int arr_size;
        int k;
        scanf("%d %d", &arr_size, &k);

        // Get expected temp array
        int *expected_temp = malloc(arr_size * sizeof(int));
        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d", expected_temp + j);
        }

        // Get actual temp array
        int *act_temp = malloc(sizeof(int) * arr_size);
        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d", act_temp + j);
        }

        // Print out the correct actual air temp value
        print_correct(expected_temp, act_temp, arr_size, k);

        free(expected_temp);
        free(act_temp);
    }

}

void swap(int *one, int *two)
{
    int temp = *two;
    *two = *one;
    *one = temp;
}

void print_correct(int *expected_temp, int *act_temp, int size, int allowed_diff)
{
    int swaps = 0;
    Valid *x = calloc(size, sizeof(int));
    int index = 0;
    int swap_index = 0;

    for (int i = 0; i < size; i++)
    {
        swaps = 0;
        x[i].indices = malloc(size * sizeof(int));
        memset(x[i].indices, -1, size * sizeof(int));

        for (int j = i; j < size; j++)
        {
            if (swaps > 0 && abs(expected_temp[i] - act_temp[j]))
            {
                x[i].indices[index++] = j;
            }

            if (abs(expected_temp[i] - act_temp[j]) <= allowed_diff)
            {
                swap(act_temp + i, act_temp + j);
                swaps++;
            }
        }

        if (swaps == 0)
        {
            for (int j = i; j >= 0; j--)
            {
                if (abs(expected_temp[i] - act_temp[j]) <= allowed_diff && x[j].indices[0] != -1 && swap_index != i) 
                {
                    swap(act_temp + i, act_temp + j);
                    swap(act_temp + i, act_temp + x[i].indices[swap_index++]);
                    swaps++;
                    break;
                }
            }

            if (swaps == 0)
            {

            }
        }
        index = 0;
    }

    // for (int i = 0; i < size; i++)
    // {
    //     free(x[i].indices);
    // }
    // free(x);

    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            printf("%d\n", act_temp[i]);
            break;
        }
        printf("%d ", act_temp[i]);
    }
}
