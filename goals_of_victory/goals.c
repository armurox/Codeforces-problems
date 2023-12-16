#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int num;
        int sum = 0;
        for (int j = 0; j < n - 1; j++)
        {
            scanf("%d", &num);
            sum += num;
        }

        printf("%d\n", -sum);
    }
}
