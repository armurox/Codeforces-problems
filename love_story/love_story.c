#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    char orig[11] = "codeforces";
    char arr[11];
    memset(arr, 0, 11);
    for (int i = 0; i < case_num; i++)
    {
        int indices = 0;
        for (int j = 0; j < 10; j++)
        {
            scanf(" %c", arr + j);
        }
        
        for (int j = 0; j < 10; j++)
        {
            if (orig[j] != arr[j])
            {
                indices++;
            }
        }

        printf("%d\n", indices);
    }
}
