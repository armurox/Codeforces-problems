#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        if (n < 5)
        {
            printf("Bob\n");
        }

        else 
        {
            printf("Alice\n");
        }
        
    }
}
