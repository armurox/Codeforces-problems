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
        int num;
        int prev_odd = 0;
        int prev_even = 0;
        int *same_parity_groups = (int*) calloc(n, sizeof(int));
        int x = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num);
            if (j > 0){
                if ((num % 2 == 0 && prev_even == 1) || (num % 2 == 1 && prev_odd == 1))
                {
                    same_parity_groups[x]++;
                }

                else
                {
                    x++;
                }
            }

            if (num % 2 == 0)
            {
                prev_even = 1;
                prev_odd = 0;
            }

            else
            {
                prev_even = 0;
                prev_odd = 1;
            }
        }

        int num_moves = 0;
        for (int j = 0; j < n; j++)
        {
            if (same_parity_groups[j] != 0)
            {
                num_moves += (same_parity_groups[j]);
            }
        }
        printf("%d\n", num_moves);
        free(same_parity_groups);
    }
}
