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
        string s;
        cin >> n >> s;
        bool found_first = false;
        int first = 0;
        int last = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B' && found_first)
            {
                last = j;
            }

            else if (s[j] == 'B')
            {
                found_first = true;
                first = j - 1;
                last = j;
            }
        }

        cout << last - first << "\n";
    }
}
