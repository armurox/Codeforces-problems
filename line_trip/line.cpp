#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        int num;
        int prev_num = 0;
        int min_diff = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (num - prev_num > min_diff)
            {
                min_diff = num - prev_num;
            }

            prev_num = num;
        }

        if (2 * (x - num) > min_diff)
        {
            min_diff = 2 * (x - num);
        }

        cout << min_diff << "\n";
    }
}
