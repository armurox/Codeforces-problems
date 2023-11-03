#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int max_px = -101;
        int max_py = - 101;
        int max_nx = 101;
        int max_ny = 101;
        int neg_validx = 0;
        int neg_validy = 0;
        int pos_validx = 0;
        int pos_validy = 0;
        int x, y;
        for (int j = 0; j < n; j++)
        {
            scanf("%d%d", &x, &y);
            if (x < 0 && x < max_nx)
            {
                max_nx = x;
                neg_validx = 1;
            }

            if (x >= 0 && x > max_px)
            {
                max_px = x;
                pos_validx = 1;
            }

            if (y < 0 && y < max_ny)
            {
                max_ny = y;
                neg_validy = 1;
            }

            if (y >= 0 && y > max_py)
            {
                max_py = y;
                pos_validy = 1;
            }
        }

        if (neg_validx == 0)
        {
            max_nx = 0;
        }

        if (neg_validy == 0)
        {
            max_ny = 0;
        }

        if (pos_validx == 0)
        {
            max_px = 0;
        }

        if (pos_validy == 0)
        {
            max_py = 0;
        }
        
        int max_x = (-1 * max_nx) + max_px;
        int max_y = (-1 * max_ny) + max_py;

        printf("%d\n", 2 * (max_x + max_y));
    }
}
