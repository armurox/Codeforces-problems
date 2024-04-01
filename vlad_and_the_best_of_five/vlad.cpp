#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int num_a = 0;
        int num_b = 0;
        for (int j = 0; j < 5; j++)
        {
            if (s[j] == 'A')
            {
                num_a++;
            }

            else
            {
                num_b++;
            }
        }

        string ans = num_a > num_b ? "A\n" : "B\n";
        cout << ans;
    }
}
