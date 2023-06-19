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
        long long size, digit, num;
        scanf("%lld %lld%lld", &size, &digit, &num);
        for (long long j = 0; j < size; j++)
        {
            if (j == 0)
            {
                if (num % (long long) 10 > digit)
                {
                    num = (num * 10) + digit;
                    break;
                }
            }
            
            else if ((num / (long long) (pow((long long)10, j))) % (long long) 10 > digit)
            {
                num = (((num / (long long) pow((long long)10,j)) * (long long) 10) + (digit))  * (long long) pow((long long) 10, j)+ num % (long long) pow((long long) 10, j);
                break;
            }

            else if (j == size - 1)
            {
                num = digit * ((long long) pow((long long)10,j + 1)) + num;
            }
        }
        printf("%lld\n", num);
    }
}
