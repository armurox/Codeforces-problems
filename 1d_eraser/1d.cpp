#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int num_moves = 0;
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B')
            {
                num_moves++;
                j += k - 1;
            }
        }

        cout << num_moves << "\n";

    }
}
