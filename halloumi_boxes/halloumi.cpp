#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int prev_num;
        cin >> prev_num;
        int num;
        bool decreasing = false;
        for (int j = 1; j < n; j++)
        {
            cin >> num;
            if (num < prev_num)
            {
                decreasing = true;
            }
            prev_num = num;
        }

        if (decreasing && k == 1)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }
    }
}
