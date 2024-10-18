#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", a + j);
        }

        int first_elem;
        int yes = 0;
        for (int j = 0; j < n - 1; j++)
        {
            first_elem = a[j];
            for (int k = j + 1; k < n; k++)
            {
                if (gcd(first_elem, a[k]) <= 2)
                {
                    printf("YES\n");
                    yes = 1;
                    break;
                }
            }
            if (yes)
                break;
        }

        if (!yes)
            printf("NO\n");
    }
}


int gcd(int a, int b)
{
    return (b != 0) ? gcd(b, a % b) : a;
}
