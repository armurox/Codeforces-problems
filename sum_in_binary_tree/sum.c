#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        long long n;
        scanf("%lld", &n);
        long long sum = 0;
        for (long long j = n; j >= 1; j /= 2)
        {
            sum += j;
        }

        printf("%lld\n", sum);
    }
}
