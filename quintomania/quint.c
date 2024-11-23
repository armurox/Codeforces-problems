#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int note;
        int prev;
        int diff;
        int yes = 1;
        scanf("%d", &prev);
        for (int j = 1; j < n; j++)
        {
            scanf("%d", &note);
            diff = (note > prev) ? note - prev : prev - note;
            if (diff == 5 || diff == 7)
            {
                prev = note;
                continue;
            }
            else
                yes = 0;
        }

        if (yes)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

