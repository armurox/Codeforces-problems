#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    size_t a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << max(a, b) + 1 << "\n";
    }

}
