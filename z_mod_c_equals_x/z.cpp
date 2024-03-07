#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        size_t a, b, c;
        cin >> a >> b >> c;
        cout << c + b + a << " " << c + b << " " << c << "\n";
    }
}
