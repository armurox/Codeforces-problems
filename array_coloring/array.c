#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int first_num;
        int num;
        int sum = 0;
        scanf("%d", &first_num);
        for (int j = 1; j < n; j++)
        {
            scanf("%d", &num);
            sum += num;
        }

        if ((first_num) % 2 == (sum % 2))
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
