#include <iostream>
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
        string s;
        cin >> s;
        int num_cont = 1;
        int num_moves = 0;
        char first = s[0];
        for (int j = 1; j < n; j++)
        {
            if (s[j] == first)
            {
                num_cont++;
            }

            else if (num_cont % 2)
            {
                num_moves++;
                first = '0' ? s[j] == '1' : '1';
                num_cont++;
            }

            else
            {
                num_cont = 1;
                first = s[j];
            }
        }

        cout << num_moves << "\n";
    }
}
