#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n, s, r;
        scanf("%d %d %d", &n, &s, &r);
        int num_per_dice = r / (n - 1);
        int num_extra = r % (n - 1);
        int dice_roll;
        for (int i = 0; i < n - 1; i++)
        {
            dice_roll = num_per_dice;
            if (num_extra <= 6)
            {
                dice_roll += num_extra;
                num_extra = 0;
            }

            else
            {
                dice_roll += 6;
                num_extra -= 6;
            }

            printf("%d ", dice_roll);
        }

        printf("%d\n", s - r);
    }
}
