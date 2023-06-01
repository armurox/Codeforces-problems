#include <stdio.h>
#include <stdlib.h>

void min_books(int num);

int main()
{
    // Get number of cases from user
    int case_num;
    scanf("%d", &case_num);

    for (int i = 0; i < case_num; i++)
    {
        // Get number of books available from user
        int num_books;
        scanf("%d", &num_books);

        min_books(num_books);
    }
}

void min_books(int num)
{
    int minute;
    int pre_bit;
    int min_minute = 0;
    int single = 0;
    int skill_1_min = 0;
    int skill_2_min = 0;
    int skill_arr[2];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &minute);
        scanf(" %d", &pre_bit);
        skill_arr[0] = pre_bit / 10;
        skill_arr[1] = pre_bit % 10;
        

        if (skill_arr[0] == 1 && (minute < skill_1_min || skill_1_min == 0))
        {
            skill_1_min = minute;
        }

        if (skill_arr[1] == 1 && (minute < skill_2_min || skill_2_min == 0))
        {
            skill_2_min = minute;
        }

        if (skill_arr[0] == 1 && skill_arr[1] == 1 && (minute < min_minute || min_minute == 0))
        {
            min_minute = minute;
            single++;
        }

        if (i == num - 1)
        {
            minute = skill_1_min + skill_2_min;
        }
    }

    if (skill_1_min == 0 || skill_2_min == 0)
    {
        printf("%d\n", -1);
        return;
    }

    if (min_minute < minute && single > 0)
    {
        printf("%d\n", min_minute);
    }
    
    else
    {
        printf("%d\n", minute);
    }
}
