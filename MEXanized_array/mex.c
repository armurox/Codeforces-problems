#include <stdio.h>

int main()
{
    int cn;
    scanf("%d", &cn);
    for (int i = 0; i < cn; i++)
    {
        int n, k, x;
        scanf("%d%d%d", &n, &k, &x);
        int j = 0;
        int count = 0;
        int sum = 0;
        int valid = 0;
        if (k > x + 1)
        {
            printf("%d\n", -1);
            continue;
        }
        while (count < n)
        {
            if (j == k - 1)
            {
                valid = 1;
                sum += j;
                j++;
            }

            else if (j == k)
            {
                if (j == x)
                {
                    j--;
                    sum += j;
                }

                else
                {
                    j = x;
                    sum += j;
                }
            }

            else if (j == x)
            {
                sum += j;
            }

            else
            {
                sum += j;
                j++;
            }

            count++;
        }

        if (valid)
        {
            printf("%d\n", sum);
        }

        else
        {
            printf("%d\n", -1);
        }
    }
}
