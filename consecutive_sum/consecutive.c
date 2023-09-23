#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cn;
    scanf("%d", &cn);
    for (int i = 0; i < cn; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        long long max_sum = -1;
        long long sum = 0;
        long long *sum_arr = malloc(sizeof(long long) * k);
        long long prev_num;
        int ind;
        for (int j = 0; j < n; j += k)
        {
            ind = 0;
            for (int l = j; l < j + k; l++)
            {
                if (j == 0)
                {
                    scanf("%lld", sum_arr + ind);
                    sum += sum_arr[ind];
                    ind++;
                    continue;
                }

                if (l == n)
                {
                    break;
                }
                sum -= sum_arr[ind];
                prev_num = sum_arr[ind];
                scanf("%lld", sum_arr + ind);
                sum += sum_arr[ind];
                if (sum > max_sum)
                {
                    max_sum = sum;
                }

                else
                {
                    sum = max_sum;
                    sum_arr[ind] = prev_num;
                }
                ind++;
            }

            if (j == 0)
            {
                max_sum = sum;
            }
        }
        
        free(sum_arr);
        printf("%lld\n", max_sum);
    }
}
