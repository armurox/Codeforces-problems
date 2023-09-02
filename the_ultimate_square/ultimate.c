#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        if (n % 2)
        {
            printf("%d\n", n / 2 + 1);
        }

        else
        {
            printf("%d\n", n / 2);
        }
    }
}
