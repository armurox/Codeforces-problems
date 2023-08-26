#include <stdio.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        char valid_string[4] = "Yes";
        int yes = 1;
        char *curr = calloc(51, sizeof(char));
        scanf("%s", curr);
        int k = 0;
        if (curr[0] != 'Y' && curr[0] != 'e' && curr[0] != 's')
        {
            printf("NO\n");
            free(curr);
            continue;
        }

        else if (curr[0] == 'e')
        {
            k = 1;
        }

        else if (curr[0] == 's')
        {
            k = 2;
        }

        for (int j = 1; curr[j] != '\0'; j++)
        {
            k = (k + 1) % 3;
            if (curr[j] != valid_string[k])
            {
                printf("NO\n");
                yes = 0;
                break;
            }
        }
        if (yes)
        {
            printf("YES\n");
        }
        free(curr);
    }
}
