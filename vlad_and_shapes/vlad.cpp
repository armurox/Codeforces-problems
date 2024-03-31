#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<string> arr;
        string row;
        bool triangle = false;
        for (int j = 0; j < n; j++)
        {
            cin >> row;
            arr.push_back(row);
        }

        int num_ones = 0;
        int prev_num_ones = 0;
        for (int j = 0; j < n; j++)
        {
            num_ones = 0;
            for (int k = 0; k < n; k++)
            {
                if (arr[j][k] == '1')
                {
                    num_ones++;
                }
            }

            if (prev_num_ones != 0 && num_ones != 0 && num_ones != prev_num_ones)
            {
                triangle = true;
                cout << "TRIANGLE\n";
                break;
            }

            prev_num_ones = num_ones;
        }

        if (!triangle)
        {
            cout << "SQUARE\n";
        }
    }
}
