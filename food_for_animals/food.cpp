#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (a >= x)
        {
            if (b + c >= y)
            {
                cout << "YES\n";
            }

            else
            {
                cout << "NO\n";
            }
        }

        else if (b >= y)
        {
            if (a + c >= x)
            {
                cout << "YES\n";
            }

            else
            {
                cout << "NO\n";
            }
        }

        else if (x - a > 0)
        {
            int remove_universal = c - (x - a);
            if (remove_universal + b >= y)
            {
                cout << "YES\n";
            }

            else
            {
                cout << "NO\n";
            }
        }
    }
}
