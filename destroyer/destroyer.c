#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int size;
        scanf("%d", &size);
        int *arr = malloc(sizeof(int) * size);
        int largest_num = 0;
        int num_lines = 0;
        int num_others = 0;
        int invalid = 0;
        for (int j = 0; j < size; j++)
        {
            scanf("%d", arr + j);
            if (arr[j] > largest_num)
            {
                largest_num = arr[j];
            }

            else if (arr[j] == 0)
            {
                num_lines++;
            }
        }

        int num_previous = num_lines;
        for (int j = 1; j <= largest_num; j++)
        {
            num_others = 0;
            for (int k = 0; k < size; k++)
            {
                if (arr[k] == j)
                {
                    num_others++;
                }
            }

            if (num_others == 0)
            {
                printf("NO\n");
                invalid = 1;
                break;
            }

            if (num_others > num_lines)
            {
                printf("NO\n");
                invalid = 1;
                break;
            }

            if (num_others > num_previous)
            {
                printf("NO\n");
                invalid = 1;
                break;
            }

            num_previous = num_others;
        }

        if (invalid == 1)
        {
            continue;
        }

        printf("YES\n");
    }
}
