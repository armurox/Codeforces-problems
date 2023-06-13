#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

        for (int j = 0; j < size - 1; j++)
        {
            for (int k = 1; k < size; k++)
            {
                for (int l = 0; l < size; l++)
                {
                    if (l == j || l == k)
                    {
                        continue;
                    }
                    int test = abs(arr[j] - arr[k]);
                    if (test == arr[l])
                    {
                        printf("%d\n", arr[j]);
                        goto jump;
                    }
                }
                
            }
        }
        jump:
            continue;
    }
}
