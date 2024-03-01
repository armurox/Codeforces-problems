#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int num1, num2, num3;
        int avg_val = n / 3;
        int rem = n % 3;
        if (rem < 2)
        {
            num1 = avg_val;
            num2 = avg_val + rem + 1;
            num3 = avg_val - 1;
        }

        else
        {
            num1 = avg_val + 1;
            num2 = avg_val + rem;
            num3 = avg_val - 1;
        }

        printf("%d %d %d\n", num1, num2, num3);
    }
}
