#include <iostream>
#include <cstdio>


using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int x1,y1, x2,y2, x3,y3;
        scanf("%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3);
        // Same line check
        if ((x1 == x2 && (y2 == y3 || y1 == y3)) || (y1 == y2 && (x2 == x3 || x1 == x3)) || (x1 == x3 && (y2 == y3 || y1 == y2)) || (y1 == y3 && (x2 == x3 || x1 == x2)))
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
        }
    }
}
