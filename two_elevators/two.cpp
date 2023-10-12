#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int first = abs(a - 1);
        int second = abs(b - c) + abs(c - 1);

        if (first < second)
        {
            cout << 1 << "\n";
        }

        else if (second < first)
        {
            cout << 2 << "\n";
        }

        else
        {
            cout << 3 << "\n";
        }
    }
}
