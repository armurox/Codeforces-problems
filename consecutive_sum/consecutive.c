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
        int _break = 0;
        long long *sum_arr = malloc(sizeof(long long) * k);
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
                    _break = 1;
                    break;
                }
                sum -= sum_arr[ind];
                scanf("%lld", sum_arr + ind);
                sum += sum_arr[ind];
                ind++;
                if (sum > max_sum)
                {
                    max_sum = sum;
                }

                else
                {
                    sum = max_sum;
                }
            }

            if (j == 0)
            {
                max_sum = sum;
            }
            if (_break)
            {
                break;
            }
        }
        
        free(sum_arr);
        printf("%lld\n", max_sum);
    }
}
