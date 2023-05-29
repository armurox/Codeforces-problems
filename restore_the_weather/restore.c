#include <stdio.h>
#include <stdlib.h>

void print_correct(int *expected_temp, int *act_temp, int size, int allowed_diff);

int main()
{
    // Get number of test cases from user
    // int case_num;
    // scanf("%d ", &case_num);

    // for (int i = 0; i < case_num; i++)
    // {
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
    // }

}

void print_correct(int *expected_temp, int *act_temp, int size, int allowed_diff)
{
    int temp;
    int swap = 0;
    for (int i = 0; i < size; i++)
    {
        swap = 0;
        for (int j = i; j < size; j++)
        {
            if (abs(expected_temp[i] - act_temp[j]) <= allowed_diff)
            {
                temp = act_temp[j];
                act_temp[j] = act_temp[i];
                act_temp[i] = temp;
                swap++;
            }
        }

        if (swap == 0)
        {
            for (int j = i; j >= 0; j--)
            {
                if (abs(expected_temp[i] - act_temp[j]) <= allowed_diff)
                {
                    temp = act_temp[j];
                    act_temp[j] = act_temp[i];
                    act_temp[i] = temp;
                    swap++;
                }
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", act_temp[i]);
    }
    printf("\n");
}
