#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);
        int bracket_count = 0;
        for (int i = 0; i < n; i++)
            bracket_count += (s[i] == ')') ? -1 : +1;
        const char *ans = (bracket_count == 0) ?"YES\n": "NO\n";
        printf("%s", ans);
    }
}

