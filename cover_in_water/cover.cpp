#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int consec = 0;
        int num_moves = 0;
        for (int j = 0; j < n; j++)
        {
            if (s.at(j) == '.')
            {
                consec++;
            }
            
            else if (consec > 2)
            {
                num_moves = 2;
                consec = 0;
                break;
            }

            else
            {
                num_moves += consec;
                consec = 0;
            }
        }

        num_moves += consec;
        if (consec > 2)
        {
            num_moves = 2;
        }
        cout << num_moves << "\n";
    }
}
