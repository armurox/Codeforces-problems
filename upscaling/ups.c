#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int flip = 0;
        for (int j = 0; j < 2 * n; j++)
        {
            if (flip)
            {
                for (int k = 0; k < n; k++)
                {
                    if (k % 2 == 0)
                    {
                        printf("..");
                    }

                    else
                    {
                        printf("##");
                    }
                }

                printf("\n");
            }

            else
            {
                for (int k = 0; k < n; k++)
                {
                    if (k % 2 == 0)
                    {
                        printf("##");
                    }

                    else
                    {
                        printf("..");
                    }
                }

                printf("\n");
            }

            if (j % 2)
            {
                flip = !flip;
            }
        }
    }
}
