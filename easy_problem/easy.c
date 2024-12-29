#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        printf("%d\n", n - 1);   
    }
}
