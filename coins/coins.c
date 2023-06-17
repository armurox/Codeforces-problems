#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        if (n % 2 == 0)
        {
            printf("YES\n");
        }

        else if (n % 2 != 0 && k % 2!= 0 && k <= n)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
        
    }
}
