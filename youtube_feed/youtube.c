#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Vid
{
    int len;
    int ent;
} Vid;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int size;
        int time;
        scanf("%d %d", &size, &time);
        Vid *arr = malloc(sizeof(Vid) * size);
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &(arr[j].len));
        }

        for (int j = 0; j < size; j++)
        {
            scanf("%d", &(arr[j].ent));
        }

        int index = -1;
        int max_allowed = 0;
        for (int j = 0; j < size; j++)
        {
            if (j > 0)
            {
                time--;
            }

            if (time >= arr[j].len && arr[j].ent > max_allowed)
            {
                max_allowed = arr[j].ent;
                index = j + 1;
            }
        }

        printf("%d\n", index);
    }
}
