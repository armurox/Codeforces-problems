#include <stdio.h>

int main()
{
    int cn;
    scanf("%d", &cn);
    for (int i = 0; i < cn; i++)
    {
        int n;
        scanf("%d", &n);
        long long sum = 1;
        long long num;
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &num);
            sum *= num;
        }

        sum +=  n - 1;
        printf("%lld\n", 2022 * sum);
    }
}
