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
        int size;
        string moves;
        cin >> size >> moves;
        int x = 0;
        int y = 0;
        int passes = 0;
        for (int j = 0; j < size; j++)
        {
            switch (moves.at(j))
            {
                case 'R':
                    x++;
                    break;
                case 'L':
                    x--;
                    break;
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
            }

            if (x == 1 && y == 1)
            {
                passes = 1;
                break;
            }
        }

        if (passes == 1)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
