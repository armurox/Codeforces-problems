#include <iostream>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}
