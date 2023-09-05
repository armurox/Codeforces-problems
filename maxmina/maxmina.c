#include <stdio.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int num;
        int yes = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num);
            if (num == 1)
            {
                yes = 1;
            }
        }

        if (yes)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
