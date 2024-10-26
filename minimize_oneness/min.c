#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        s[n] = '\0';
        if (n == 1)
            printf("%d\n", 0);
        else
        {
            for (int j = 0; j < n - 1; j++)
                s[j] = '0';
            s[n - 1] = '1';
            printf("%s\n", s);
        }
    }
}
