#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        int num_greatest = floor((float) (-1 / 2) + sqrt(float(1/4) + (2 * n)));
        int double_sum = (2 * num_greatest) - 1;
        int amt_left = n - ((num_greatest *(num_greatest + 1)) / 2);
        int amt_left_b = 0;
        int amt_left_a = 0;
        if (((double_sum - 1) % 8) != 0 && ((double_sum - 5) % 8) != 0)
        {
            double_sum = (2 * num_greatest) + 1;
            if ((double_sum - 1) % 8 == 0)
            {
                amt_left_a = num_greatest;
                amt_left_b = amt_left;
            }

            else
            {
                amt_left_b = num_greatest;
                amt_left_a = amt_left;
            }
            double_sum = (2 * num_greatest) - 3;
        }
        printf("%d\n", double_sum);
        printf("%d\n", amt_left_b);
        int b_sum;
        int white_b;
        int black_b;
        int a_sum;
        int white_a;
        int black_a;
        if (((double_sum - 1) % 8) == 0)
        {
            a_sum = (((double_sum - 1) / 8) + 1) * (1 + double_sum) + amt_left_a;
            white_a = ceil((float) a_sum / 2);
            black_a = a_sum - white_a;
            b_sum = n - a_sum;
            white_b = floor((float)b_sum / 2);
            black_b = b_sum - white_b;
        }

        else
        {
            b_sum = (((double_sum - 5) / 8) + 1) * (5 + double_sum) + amt_left_b;
            white_b = floor((float) b_sum / 2);
            black_b = b_sum - white_b;
            a_sum = n - b_sum;
            white_a = ceil((float)a_sum / 2);
            black_a = a_sum - white_a;
            
        }

        printf("%d %d %d %d\n", white_a, black_a, white_b, black_b);
    }
}
