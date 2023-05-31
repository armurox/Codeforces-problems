#include <stdio.h>

void an_pal(char str[], int str_size)
{
    int test_size = str_size / 2;
    for (int i = 0; i < test_size - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            printf("YES\n");
            return;
        }
    }

    printf("NO\n");
}
