#include <iostream>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        cout << (n / 3) - 2 << "\n";
    }
}
