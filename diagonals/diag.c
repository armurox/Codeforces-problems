#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int num_diagonals = 0;
        int count_decrease = 0;
        for (int j = n; k > 0; j--)
        {
            num_diagonals++;
            k -= j;
            if (j == n)
                continue;
            else if (count_decrease == 1)
            {
                count_decrease = 0;
                continue;
            }
            j++;
            count_decrease = 1;
        }

        printf("%d\n", num_diagonals);
    }
}
