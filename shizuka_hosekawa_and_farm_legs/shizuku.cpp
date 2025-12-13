#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << ((n % 2) ? 0 : n / 4 + 1) << '\n';
    }    
}
