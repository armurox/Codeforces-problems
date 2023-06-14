#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int min_ones = 2;
        for (int j = 1; j <= n; j++)
        {
            if (ceil(j / k) > min_ones && j <= n / 2)
            {
                min_ones = 2 * ceil(j / k);
            }

            else if (j > ceil(n / 2) && min_ones < n)
            {
                min_ones = 2 * ceil(j / k);
            }
        }

        printf("%d\n", min_ones);
    }
}
