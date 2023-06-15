#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int size = 101;
        char *arr = calloc(size, sizeof(char));
        int track;
        for (int j = 0; arr[j - 1] != '\n'; j++)
        {
            if (j == 0)
            {
                scanf(" %c", arr + j);
                continue;
            }
            scanf("%c", arr + j);
            track = j;

        }
        arr[track] = '\0';
        
        int replace_num = 0;
        for (int j = 0; arr[j] != '\0'; j++)
        {
            if (j == 0 && arr[j] != '^' && (arr[j + 1] == '\0' || arr[j + 1] == '_'))
            {
                replace_num += 2;
            }

            else if (j == 0 && arr[j] != '^')
            {
                replace_num++;
            }

            else if (arr[j] == '_')
            {
                if (j != 1 && arr[j - 1] != '^')
                {
                    replace_num++;
                }

                if (arr[j + 1] != '^')
                {
                    replace_num++;
                }
            }
        }

        printf("%d\n", replace_num);
    }
}
