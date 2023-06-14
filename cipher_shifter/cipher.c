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
        char *arr = calloc(size, sizeof(char));
        char *orig_arr = calloc(size, sizeof(char));
        for (int j = 0; j < size; j++)
        {
            scanf(" %c", arr + j);
        }

        char orig = arr[0];
        int k = 0;
        for (int j = 1; j < size; j++)
        {
            if (arr[j] == orig)
            {
                orig_arr[k] = orig;
                orig = arr[j + 1];
                j++;
                k++;
            }
        }

        for (int j = 0; orig_arr[j] != '\0'; j++)
        {
            printf("%c", orig_arr[j]);
        }
        printf("\n");
    }
}
