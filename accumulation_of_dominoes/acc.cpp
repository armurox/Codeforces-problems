#include <iostream>

using namespace std;

int main()
{
    size_t n, m;
    cin >> n >> m;
    size_t num;
    if (m == 1)
    {
        num = n - 1;
    }

    else
    {
        num = n * (m - 1);
    }

    cout << num << "\n";
}

