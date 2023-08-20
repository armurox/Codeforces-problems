#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        int skip;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &skip);
        }
        printf("%d %d\n", 1, n);
    }
}
