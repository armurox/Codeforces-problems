#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        int size;
        int num_pairs;
        scanf("%d %d", &size, &num_pairs);
        int *arr = malloc(sizeof(int) * size);
        for (int j = 0; j < size; j++)
        {
            arr[j] = -1;
        }
        int act_pairs = 0;
        int prev = 0;
        int yes = 0;
        int no = 0;
        int new_start = 0;
        int prev_store;
        arr[0] = 1;
        for (int j = 1; j < size; j++)
        {
            if (act_pairs < num_pairs)
            {
                arr[j] = 1;
                act_pairs += 1 + prev;
                prev_store = prev;
                prev++;
            }

            if (act_pairs > num_pairs)
            {
                arr[j] = -1;
                act_pairs -= (1 + prev_store);
                new_start = j;
                break;
            }

            if (act_pairs == num_pairs)
            {
                yes++;
                break;
            }
        }

        prev = 0;
        if (new_start > 0 && new_start != size - 1)
        {
            for (int j = new_start + 1; j < size; j++)
            {
                act_pairs += 1 + prev;
                if (act_pairs > num_pairs)
                {
                    no++;
                    break;
                }

                if (act_pairs == num_pairs)
                {
                    yes++;
                    break;
                }
            }
        }

        if (yes > 0)
        {
            printf("YES\n");
            for (int j = 0; j < size; j++)
            {
                printf("%d ", arr[j]);
            }
            printf("\n");
        }
        
        else
        {
            printf("NO\n");
        }

       
    }
}
