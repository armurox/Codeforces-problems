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
        int mid = n / 2;
        char init = s[mid];
        int num_pal = -1;
        for (int j = mid; j < n; j++)
        {
            if (s[j] != init)
            {
                break;
            }

            num_pal++;
        }

        for (int j = mid; j > -1; j--)
        {
            if (s[j] != init)
            {
                break;
            }

            num_pal++;
        }

        cout << num_pal << "\n";
    }
}