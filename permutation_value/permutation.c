#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d", 1);
        for (int j = n; j > 1; j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}
