#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n, k, x;
        int sum = 0;
        int count = 0;
        scanf("%d %d %d", &n, &k, &x);
        if (x == 1 && k == 2 && n % 2 != 0)
        {
            printf("NO\n");
        }

        else if (x == 1 && k == 1)
        {
            printf("NO\n");
        }

        else if (x != 1)
        {
            printf("YES\n");
            for (int j = 0; j < n; j++)
            {
                count++;
            }

            printf("%d\n", count);
            for (int j = 0; j < n; j++)
            {
                printf("%d ", 1);
            }
            printf("\n");
            count = 0;
        }

        else if (n % 2 != 0)
        {
            printf("YES\n");
            while (sum < n)
            {
                if (sum == 0)
                {
                    sum += 3;
                    count++;
                }

                else
                {
                    sum += 2;
                    count++;
                }
            }
            printf("%d\n", count);
            count = 0;
            sum = 0;
            while (sum < n)
            {
                if (sum == 0)
                {
                    printf("%d ", 3);
                    sum += 3;
                }

                else
                {
                    printf("%d ", 2);
                    sum += 2;
                }
            }
            printf("\n");
            sum = 0;
        }

        else
        {
            printf("YES\n");
             while (sum < n)
            {
                sum += 2;
                count++;
            }
            printf("%d\n", count);
            sum = 0;
            count = 0;
            while (sum < n)
            {
                printf("%d ", 2);
                sum += 2;
            }

            printf("\n");
        }
    }
}
