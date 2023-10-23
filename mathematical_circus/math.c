#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        if (k % 2)
        {
            printf("YES\n");
            for (int j = 1; j < n; j+=2)
            {
                printf("%d %d\n", j, j + 1);
            }
        }

        else
        {
            int num_valid = 0;
            for (int j = 2; j < n + 1; j += 2)
            {
                if (j % 4 > 0 && (j + k) % 4 == 0)
                {
                    num_valid++;
                }
            }
            if (num_valid < n / 4 || k == 0)
            {
                printf("NO\n");
                continue;
            }

            printf("YES\n");
            int max_j = 0;
            for (int j = 1; j < n; j+=2)
            {
                if (j + 3 + 2 * (j / 2) < n + 1)
                {
                    max_j= j;
                    printf("%d %d\n", j, j + (3 + 2 * (j / 2)));
                }
                
            }
            
            max_j += 2;
            for (int j = 2; j < n + 1; j+=2)
            {
                if (j % 4 > 0)
                {
                    printf("%d %d\n", j, max_j);
                    max_j += 2;
                }
            }
        }
    }
}
