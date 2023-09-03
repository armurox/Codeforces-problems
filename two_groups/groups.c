#include <stdio.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        long long pos_sum = 0;
        long long neg_sum = 0;
        int num;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num);
            if (num > 0)
            {
                pos_sum += num;
            }

            else if (num < 0)
            {
                neg_sum += -num;
            }
        }

        printf("%lld\n", (pos_sum > neg_sum) ? pos_sum - neg_sum : neg_sum - pos_sum);
    }
}
