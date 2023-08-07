#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    int n, x, y;;
    scanf("%d%d%d", &n, &x, &y);
    int sum = x + y;
    if (n == 1 && (x == y))
    {
        printf("%d\n", 1);
        printf("%d:%d\n", x, y);
    }

    else if (n == 1)
    {
        printf("%d\n", 0);
        printf("%d:%d\n", x, y);
    }

    else if (n - sum <= 0)
    {
        printf("%d\n", 0);
        int count;
        if (x <= y)
        {
            count = 0;
            while (x != 0 && count < n - 1)
            {
                printf("%d:%d\n", 1, 0);
                x--;
                count++;
            }

            while (count < n - 1)
            {
                printf("%d:%d\n", x, 1);
                y--;
                count++;
            }

            printf("%d:%d\n", x, y);
        }

        else
        {
            count = 0;
            while (y != 0 && count < n - 1)
            {
                printf("%d:%d\n", 0, 1);
                y--;
                count++;
            }

            while (count < n - 1)
            {
                printf("%d:%d\n", 1, y);
                x--;
                count++;
            }
            printf("%d:%d\n", x, y);
        }
    }

    else
    {
        printf("%d\n", n - sum);
        for (int i = 0; i < n; i++)
        {
            if (x != 0)
            {
                printf("%d:%d\n", 1, 0);
                x--;
            }

            else if (y != 0)
            {
                printf("%d:%d\n", 0, 1);
                y--;
            }

            else
            {
                printf("%d:%d\n", 0, 0);
            }
        }
    }
}
