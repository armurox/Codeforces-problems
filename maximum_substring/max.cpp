#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n;
        cin >> n;
        string word;
        cin >> word;
        long long num_ones = 0;
        long long num_zeros = 0;
        long long x = 0;
        long long y = 0;
        for (int j = 0; j < n; j++)
        {
            if (word[j] == '1')
            {
                num_zeros = 0;
                num_ones++;
            }

            else
            {
                num_ones = 0;
                num_zeros++;
            }
            x = max(x, num_ones);
            y = max(y, num_zeros);
        }
        // Max cost
        long long max_cost = (x > y) ? x * x : y * y;
        x = count(word.begin(), word.end(), '1');
        y = count(word.begin(), word.end(), '0');
        max_cost = max(max_cost, x * y);
        cout << max_cost << "\n";
    }
}
