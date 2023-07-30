#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        int x, y;
        scanf("%d %d", &x, &y);
        int x_i, y_i;
        int no = 0;
        for (int j = 0; j < k; j++)
        {
            scanf("%d %d", &x_i, &y_i);
            if ((abs(x - x_i) + abs(y - y_i)) % 2 == 1)
            {
                    no = 1;
            }
        }

        if (no)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
        }
    }
}
