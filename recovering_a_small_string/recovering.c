#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[4];
        s[3] = '\0';
        if (n <= 28)
        {
            s[0] = 'a';
            s[1] = 'a';
            s[2] = (char) n + 94;
            printf("%s\n", s);
            continue;
        }

        else if (n <= 53)
        {
            s[0] = 'a';
            s[1] = (char) n + 69;
            s[2] = 'z';
            printf("%s\n", s);
            continue;
        }

        else
        {
            s[0] = (char) n + 44;
            s[1] = 'z';
            s[2] = 'z';
            printf("%s\n", s);
            continue;
        }
    }
}
