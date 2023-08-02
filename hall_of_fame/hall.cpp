#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        char *arr = (char*) calloc(n + 1, sizeof(char));
        scanf("%s", arr);
        int yes = 0;
        for (int j = 0; j < n; j++)
        {
            if (j < n - 1)
            {
                if (arr[j] == 'R' &&  arr[j + 1] == 'L')
                {
                    printf("%d\n", 0);
                    yes = 1;
                    break;
                }
            }

            if (j > 0)
            {
                if (arr[j] == 'R' && arr[j - 1] == 'L')
                {
                    printf("%d\n", j);
                    yes = 1;
                    break;
                }
            }
        }

        if (!yes)
        {
            printf("%d\n", -1);
        }

        free(arr);
    }
}

