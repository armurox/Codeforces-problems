#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        char *arr = (char*) calloc((n + 1), sizeof(char));
        scanf("%s", arr);
        int curr_sum = 0;
        arr[0] == '1' ? curr_sum = 1 : curr_sum == 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] == '0')
            {
                printf("+");
            }

            else if (arr[j] == '1' && curr_sum == 1)
            {
                printf("-");
                curr_sum = 0;
            }

            else
            {
                printf("+");
                curr_sum = 1;
            }
        }
        printf("\n");
        free(arr);
    }
}
