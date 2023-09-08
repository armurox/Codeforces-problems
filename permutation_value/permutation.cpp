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
        cout << 1;
        for (int j = n; j > 1; j--)
        {
            cout << " " << j;
        }
        cout << "\n";
    }
}
