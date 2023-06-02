#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Get number of cases from user
    int case_num;
    scanf("%d", &case_num);
    
    for (int i = 0; i < case_num; i++)
    {
        int arr_size;
        scanf("%d", &arr_size);
        int *arr = malloc(sizeof(int) * arr_size);
        for (int j = 0; j < arr_size; j++)
        {
            scanf("%d", arr + j);
        }

        int swaps = 1;
        int num_sweeps = 0;
        // Solution currently being revamped
    }
}