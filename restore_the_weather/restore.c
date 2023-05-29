#include <stdio.h>
#include <stdlib.h>

void print_correct(int *expected_temp, int *act_temp, int size, int allowed_diff);

// typdef struct 
// {
//     int *sol_arr;

// } Solutions;


int main()
{
    // Get number of test cases from user
    int case_num;
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        // Get array size and max difference between expected and actual temperature from user
        int arr_size;
        int k;
        scanf("%d %d", arr_size, k);

        // Get expected temp array
        int *expected_temp = malloc(sizeof(int) * arr_size);
        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d ", expected_temp + j);
        }

        // Get actual temp array
        int *act_temp = malloc(sizeof(int) * arr_size);
        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d ", act_temp + j);
        }

        // Print out the correct actual air temp value
        print_correct(expected_temp, act_temp, arr_size, k);

        free(expected_temp);
        free(act_temp);
    }

}

void print_correct(int *expected_temp, int *act_temp, int size, int allowed_diff)
{
    // Dynamically allocate an array which will contain the correct solution
    int *corr_arr = malloc(sizeof(int) * size);
    // Keep track of multiple possible solutions, only allow unique solutions
    // int mul_sol = 0;
    for (int i = 0; i < size; i++)
    {
        // mul_sol = 0;
        for (int j = 0; j < size; j++)
        {
            if (abs(expected_temp[i] - act_temp[j]) <= allowed_diff)
            {

            }
        }
    }
}