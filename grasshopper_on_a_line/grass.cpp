#include <iostream>

using namespace std;
int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int x, k;
        cin >> x >> k;
        if (x % k > 0)
        {
            cout << 1 << '\n' << x << '\n';
        }

        else
        {
            cout << 2 << '\n' << x - 1 << " " << 1 << '\n';
        }
    }
}
