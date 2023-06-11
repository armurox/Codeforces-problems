#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEMP 6

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        char *arr = malloc(sizeof(char) * MAX_TEMP);
        for (int j = 0; j < MAX_TEMP; j++)
        {
            arr[j] = '\0';
        }

        
        for (int j = 0; j < MAX_TEMP - 1; j++)
        {
            scanf("%c", arr + j);

            if (arr[j] == '\n' && j == 0)
            {
                j--;
            }

            else if (arr[j] == '\n')
            {
                arr[j] = '\0';
                break;
            }

        }
        
        
        int k = 0;
        int num_integers = 1;
        while (arr[k] != '\0')
        {
            if (arr[k] == '?' && k == 0)
            {
                num_integers *= 9;
            }

            else if (arr[k] == '0' && k == 0)
            {
                num_integers = 0;
                break;
            }

            else if (arr[k] == '?')
            {
                num_integers *= 10;
            }

            
            k++;
        }

        printf("%d\n", num_integers);
        free(arr);
    }
}
