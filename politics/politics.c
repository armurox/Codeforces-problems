#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        int k;
        scanf("%d %d", &n, &k);
        char **arr = calloc(k, sizeof(char*));
        for (int j = 0; j < k; j++)
        {
            *(arr + j) = calloc(n, sizeof(char));
        }
        
        for (int j = 0; j < n; j++)
        {
            for (int l = 0; l < k; l++)
            {
                scanf(" %c", (*(arr + l) + j));
            }
        }

        int *removed = malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            removed[j] = -1;
        }

        char valid;
        int num_left = n;
        for (int j = 0; j < k; j++)
        {
            valid = **(arr + j);
            for (int l = 1; l < n; l++)
            {
                if (l == removed[l])
                {
                    continue;
                }

                if (*(*(arr + j) + l) != valid)
                {
                    removed[l] = l;
                    num_left--;
                }
            }
        }
        printf("%d\n", num_left);
    }
}
