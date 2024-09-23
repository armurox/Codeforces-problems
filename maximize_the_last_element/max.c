#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int max_val = 0;
        int num;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num);
            max_val = (j % 2 == 0 && (n - (j + 1)) % 2 == 0 && num >= max_val) ? num : max_val;
        }
        printf("%d\n", max_val);
    }
}
