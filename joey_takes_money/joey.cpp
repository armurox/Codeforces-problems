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
        size_t sum = 1;
        size_t num;
        for (int j= 0; j < n; j++)
        {
            cin >> num;
            sum *= num;
        }

        sum += n - 1;
        cout << 2022 * sum << "\n";
    }
}
