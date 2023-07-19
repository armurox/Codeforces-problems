#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int num_ropes;
        scanf("%d", &num_ropes);
        int num_moves = 0;
        for (int j = 0; j < num_ropes; j++)
        {
            int h, l;
            scanf("%d %d", &h, &l);
            if (h - l > 0)
            {
                num_moves++;
            }
        }

        printf("%d\n", num_moves);
        
    }
}
