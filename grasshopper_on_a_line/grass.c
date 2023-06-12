#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int x;
        int k;
        scanf("%d %d", &x, &k);
        int num_jumps;
        if (x % k > 0)
        {
            num_jumps = 1;
            printf("%d\n%d\n", num_jumps, x);
        }

        else
        {
            num_jumps = 2;
            printf("%d\n%d %d\n", num_jumps, x - 1, 1);
        }
    }
}
