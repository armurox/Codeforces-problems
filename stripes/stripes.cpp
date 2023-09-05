#include <iostream>
#include <vector>
#include <string>

#define GRID_SIZE 8

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        vector<string> grid;
        string row;
        for (int j = 0; j < GRID_SIZE; j++)
        {
            cin >> row;
            grid.push_back(row);
        }

        int num_blue = 0;
        int num_red = 0;
        for (int j = 0; j < GRID_SIZE; j++)
        {
            for (int k = 0; k < GRID_SIZE; k++)
            {
                if (grid[j][k] == 'R')
                {
                    num_red++;
                }
            }

            if (num_red == GRID_SIZE)
            {
                cout << "R\n";
                break;
            }
            num_red = 0;
        }

        for (int j = 0; j < GRID_SIZE; j++)
        {
            for (int k = 0; k < GRID_SIZE; k++)
            {
                if (grid[k][j] == 'B')
                {
                    num_blue++;
                }
            }

            if (num_blue == GRID_SIZE)
            {
                cout << "B\n";
                break;
            }

            num_blue = 0;
        }
    }
}
