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
        int num_greatest = floor((double) (-0.5) + sqrt((double)(0.25) + (2 * n)));
        int double_sum = (2 * num_greatest) - 1;
        int amt_left = n - ((num_greatest *(num_greatest + 1)) / 2);
        int amt_left_b = 0;
        int amt_left_a = 0;
        if (((double_sum - 1) % 8) == 0)
        {
            amt_left_b = amt_left;
        }

        else if (((double_sum - 5) % 8) == 0)
        {
            amt_left_a = amt_left;
        }
        else
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
        int b_sum;
        int white_b;
        int black_b;
        int a_sum;
        int white_a;
        int black_a;
        if (((double_sum - 1) % 8) == 0)
        {
            if (double_sum != 1)
            {
                a_sum = (((((double_sum - 1) / 8) + 1) * (1 + double_sum)) / 2) + amt_left_a;
            }

            else
            {
                a_sum = 1 + amt_left_a;
            }
            
            white_a =  (a_sum / 2) + 1;
            black_a = a_sum - white_a;
            b_sum = n - a_sum;
            white_b = floor((float)b_sum / 2);
            black_b = b_sum - white_b;
        }

        else
        {
            if (double_sum != 5)
            {
                b_sum = (((((double_sum - 5) / 8) + 1) * (5 + double_sum)) / 2) + amt_left_b;
            }

            else
            {
                 b_sum = 5 + amt_left_b;
            }
            
            white_b = floor((float) b_sum / 2);
            black_b = b_sum - white_b;
            a_sum = n - b_sum;
            white_a = (a_sum / 2) + 1;
            black_a = a_sum - white_a;
            
        }

        printf("%d %d %d %d\n", white_a, black_a, white_b, black_b);
    }
}
