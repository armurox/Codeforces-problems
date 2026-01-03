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
        string s;
        cin >> s;
        int max_index = -1;
        int num_days_slept = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '0' && j > max_index)
                num_days_slept += 1;
            else if (s[j] == '1')
                max_index = j + k;
        }

        cout << num_days_slept << '\n';
    }
}
