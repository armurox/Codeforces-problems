#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int curr;
        int num_given = 0;
        int robin_mon = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &curr);
            if (robin_mon && curr == 0)
            {
                robin_mon--;
                num_given++;
            }

            else if (curr >= k)
            {
                robin_mon += curr;
            }
        }

        printf("%d\n", num_given);

    }
}
