#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        char *s = calloc(7, sizeof(char));
        scanf("%s",s);
        int num_rounds = 0;
        for (int j = 1; s[j] != '\0'; j++)
        {
            num_rounds += 9;
        }
        s[1] = '\0';
        num_rounds += atoi(s);
        printf("%d\n", num_rounds);


    }
}
