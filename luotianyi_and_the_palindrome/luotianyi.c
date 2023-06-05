#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        char *arr = calloc(51, sizeof(int));
        int size = 0;
        for (int j = 0;; j++)
        {
            if (j == 0)
            {
                scanf(" %c", arr + j);
            }

            else
            {
                scanf("%c", arr + j);
            }
            
            size++;
            if (arr[j] == '\n')
            {
                arr[j] = '\0';
                size--;
                break;
            }
        }
        int max_str = -1;
        if (size % 2 == 0)
        {
            for (int j = 0; j < (size / 2) - 1; j++)
            {
                if (arr[j] != arr[j + 1])
                { 
                    max_str = size - 1;
                    break;
                }
            }
        }

        else
        {
             for (int j = 0; j < (size / 2); j++)
            {
                if (arr[j] != arr[j + 1])
                { 
                    max_str = size - 1;
                    break;
                }
            }
        }
        
        printf("%d\n", max_str);
    }
}
