#include <cstdio>
#include <iostream>
 
using namespace std;
 
int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        char game[3][3];
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
               scanf(" %c", game[j] + k);
            }
        }
    
 
        int win = 0;
        for (int j = 0; j < 3; j++)
        {
            // Check rows
            if (game[j][0] == game[j][1] && game[j][1] == game[j][2] && game[j][1] != '.')
            {
                printf("%c\n", game[j][0]);
                win = 1;
                break;
            }
            
            // Check columns
            else if (game[0][j] == game[1][j] && game[1][j] == game[2][j] && game[1][j] != '.')
            {
                printf("%c\n", game[0][j]);
                win = 1;
                break;
            }
        }
 
        // Check diagonals
        if (((game[0][0] == game[1][1] && game[2][2] == game[1][1] && game[1][1] != '.') || (game[2][0] == game[1][1] && game[0][2] == game[1][1] && game[1][1] != '.')) && win == 0)
        {
            printf("%c\n", game[1][1]);
            win = 1;
        }
 
        if (win)
        {
            continue;
        }
 
        printf("DRAW\n");
    }
}