#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[101];
        scanf(" %100[^\n]", s);
        int size_s = strlen(s);
        char resultant_s[size_s + 1];
        char temp_s[size_s + 1];
        for (int j = 0; j < size_s + 1; j++)
        {
            if (s[j] == 'p')
                resultant_s[j] = 'q';
            else if (s[j] == 'q')
                resultant_s[j] = 'p';
            else
                resultant_s[j] = s[j];
        }

        int k = 0;
        for (int j = size_s - 1; j >= 0; j--)
        {
            temp_s[k] = resultant_s[j];
            printf("%c", temp_s[k]);
            k++;
        }
        printf("\n");
    }
}
