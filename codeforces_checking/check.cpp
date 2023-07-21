#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        char let;
        scanf(" %c", &let);
        string test = "codeforces";
        bool is_present = false;
        for (int i = 0; i < 10; i++)
        {
            if (test.at(i) == let)
            {
                printf("YES\n");
                is_present = true;
                break;
            }
        }

        if (!is_present)
        {
            printf("NO\n");
        }
    }
}
