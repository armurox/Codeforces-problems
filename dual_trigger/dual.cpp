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
        string l;
        cin >> l;
        int num_ones = 0;
        for (int j = 0; j < n; j++)
        {
            if (l[j] == '1')
            {
                num_ones++;
            }
        }
        string ans = (num_ones % 2 || (num_ones == 2 && (l.find("11") != string::npos))) ? "NO\n" : "YES\n";
        cout << ans;
    }
}
