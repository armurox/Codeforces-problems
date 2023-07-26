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
        int num_twos = 0;
        int *arr = (int*) malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", arr + j);
            if (arr[j] == 2)
            {
                num_twos++;
            }
        }

        int k;
        int nums = 0;
        if (num_twos == 0)
        {
            printf("%d\n", 1);
        }

        else if (num_twos % 2 == 1)
        {
            printf("%d\n", -1);
        }

        else
        {
            for (int j = 0; nums < num_twos / 2; j++)
            {
                if (arr[j] == 2)
                {
                    k = j + 1;
                    nums++;
                }
            }

            printf("%d\n", k);
        }

        free(arr);
    }
}
