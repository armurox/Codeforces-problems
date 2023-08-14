#include <stdio.h>
#include <stdlib.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        char *s = malloc(sizeof(char) * n);
        scanf("%s", s);
        int curr_double = 0;
        int prev_double = 1;
        int no = 0;
        int set = 1;
        for (int j = 0; j < n; j++)
        {
            // Set a double sequence to true if it exists
            set = 0;
            if (j < n - 1)
            {
                if (s[j] == s[j + 1] && prev_double == 0)
                {
                    curr_double = 1;
                    j++;
                    set = 1;
                }

            }
            
            // Set single sequence to true otherwise
            else 
            {
                curr_double = 0;
            }

            if (set == 0)
            {
                curr_double = 0;
            }
            
            // Return false if the double-single sequence does not alternate
            if (curr_double == prev_double)
            {
                printf("NO\n");
                no = 1;
                break;
            }

            prev_double = curr_double;
        }

        // Print yes otherwise
        if (!no)
        {
            printf("YES\n");
        }

        free(s);
    }
}
