#include <stdio.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int size;
        scanf("%d", &size);
        long long *arr = malloc(sizeof(long long) * size);
        long long num_moves = 0;
        long long sum = 0;
        int negative_tracker = 0;
        for (int j = 0; j < size; j++)
        {
            scanf("%lld", arr + j);
        }

        for (int j = 0; j < size; j++)
        {
            if (arr[j] < 0 && negative_tracker == 0)
            {
                negative_tracker = 1;
                num_moves++;
                sum += -1 * arr[j];
            }

            else if (arr[j] < 0)
            {
                sum += -1 * arr[j];
            }

            else if (arr[j] > 0)
            {
                negative_tracker = 0;
                sum += arr[j];
            }
        }

        printf("%lld %lld\n", sum, num_moves);
        free(arr);
    }
}
