#include <stdio.h>


int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int k;
        scanf("%d", &k);
        printf("%d\n", k - 1);
    }
}
