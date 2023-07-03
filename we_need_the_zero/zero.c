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
        int *arr = malloc(sizeof(int) * size);
        for (int j = 0; j < size; j++)
        {
            scanf("%d", arr + j);
        }

        int x = arr[0];
        for (int j = 1; j < size; j++)
        {
            x ^= arr[j];
        }
        
        for (int j = 0; j < size; j++)
        {
            arr[j] ^= x;
        }

        int check = arr[0];

        for (int j = 1; j < size; j++)
        {
            check ^= arr[j];
        }
        if (check == 0)
        {
            printf("%d\n", x);
        }

        else
        {
            printf("%d\n", -1);
        }
        
    }
}
