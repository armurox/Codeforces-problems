#include <stdio.h>

int main()
{
    int cn;
    scanf("%d", &cn);
    for (int i = 0; i < cn; i++)
    {
        char c;
        int p = 0;
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                scanf(" %c", &c);
                if (c == 'X')
                {
                    if (j == 0 || j == 9 || k == 0 || k == 9)
                    {
                        p++;
                    }

                    else if (j == 1 || j == 8 || k == 1 || k == 8)
                    {
                        p += 2;
                    }

                    else if (j == 2 || j == 7 || k == 2 || k == 7)
                    {
                        p += 3;
                    }

                    else if (j == 3 || j == 6 || k == 3 || k == 6)
                    {
                        p += 4;
                    }

                    else
                    {
                        p += 5;
                    }
                }
            }
        }

        printf("%d\n", p);
    }
}
