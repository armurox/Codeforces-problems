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
        if (n % 2 == 1)
        {
            printf("%d\n", -1);
        }

        else
        {
            printf("%d %d\n", 1, n / 2);
        }
    }
}
