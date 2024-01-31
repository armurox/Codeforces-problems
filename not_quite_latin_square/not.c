#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char curr[] = "tem";
        char ans;
        int a = 0;
        int b = 0;
        int c = 0;
        int temp = -1;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf(" %c", curr + k);
                if (curr[k] == '?')
                {
                    temp = k;
                }

                else if (curr[k] == 'A')
                {
                    a = 1;
                }

                else if (curr[k] == 'B')
                {
                    b = 1;
                }

                else
                {
                    c = 1;
                }
                
            }
            
            if (temp != -1)
            {
                if (a && b)
                {
                    ans = 'C';
                }

                else if (a & c)
                {
                    ans = 'B';
                }

                else
                {
                    ans = 'A';
                }
            }
            a = 0;
            b = 0;
            c = 0;
            temp = -1;
        }

        printf("%c\n", ans);
    }
}
