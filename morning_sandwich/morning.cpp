#include <iostream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int b, c, h;
        cin >> b >> c >> h;
        if (b <= c + h)
        {
            cout << (2 * b) - 1 << "\n";
        }

        else
        {
            cout << (2 * (c + h)) + 1 << "\n";
        }
    }

}
