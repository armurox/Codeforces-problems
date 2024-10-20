#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a = 0;
        int b = 0;
        int flip = 1;
        char curr = 'a';
        for (int j = 1; n > 0; j++)
        {
            if (flip == 2)
            {
                if (curr == 'a')
                    curr = 'b';
                else
                    curr = 'a';
                flip = 0;
            }

            flip += 1;
            if (curr == 'a')
                a += j;
            else
                b += j;
            n -= j;
        }

        if (n < 0)
        {
            if (curr == 'b')
                b += n;
            else
                a += n;
        }

        printf("%d %d\n", a, b);
    }
}
