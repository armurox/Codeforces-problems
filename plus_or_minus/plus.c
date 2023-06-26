#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        if (a + b == c)
        {
            printf("+\n");
        }
        else
        {
            printf("-\n");        
        }
    }
}
