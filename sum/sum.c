#include <stdio.h>

int main()
{
    int cn;
    scanf("%d", &cn);
    for (int i = 0; i < cn; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a + b == c || a + c == b || b + c == a)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
