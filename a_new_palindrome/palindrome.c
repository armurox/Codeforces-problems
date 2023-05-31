#include <stdio.h>
#include <string.h>
#include "funcs.h"

int main()
{
    // Get number of cases from user
    int case_num;
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        // Get palindrome from user
        int str_size = 0;
        char str[MAX_SIZE];
        memset(str, 0, MAX_SIZE);
        for (int j = 0; j < MAX_SIZE; j++)
        {
            if (j == 0)
            {
                scanf(" %c", str + j);
            }
            
            else
            {
                scanf("%c", str + j);
            }
            str_size++;
            if (str[j] == '\n')
            {
                str_size--;
                break;
            }
        }

        an_pal(str, str_size);

    }
}
