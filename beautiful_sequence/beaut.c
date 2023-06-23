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
        for (int j = 0; j < size; j++)
        {
            scanf("%d", arr + j);
        }

        int yes = 0;
        for (int j = 0; j < size; j++)
        {
            for (int k = j; k < size; k++)
            {
                if (arr[k] == j + 1)
                {
                    printf("YES\n");
                    yes = 1;
                    break;
                }
            }
            if (yes == 1)
            {
                break;
            }
        }

        if (yes != 1)
        {
            printf("NO\n");
        }
    }
}
