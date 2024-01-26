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
        string a, b, c;
        cin >> a >> b >> c;
        int num_equal = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == c[j] or c[j] == b[j])
            {
                num_equal++;
            }
        }

        if (num_equal == n)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }

    }

}
