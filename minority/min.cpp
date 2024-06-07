#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int size = s.length();
        int num_zeros = 0;
        int num_ones = 0;
        for (int j = 0; j < size; j++)
        {
            (s[j] == '0') ? num_zeros++ : num_ones++;
        }

        int ans = min(num_zeros, num_ones);
        int result = (num_zeros == num_ones) ? ans - 1 : ans;

        cout <<  result << "\n";
    }
}
