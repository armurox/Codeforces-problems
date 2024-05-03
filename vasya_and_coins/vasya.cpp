#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        size_t a, b;
        cin >> a >> b;
        if (a == 0)
        {
            cout << 1 << "\n";
        }

        else
        {
            cout << a + (2 * b) + 1 << "\n";
        }
    }
}
