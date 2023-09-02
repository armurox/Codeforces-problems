#include <iostream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n;
        cin >> n;
        if (n % 2)
        {
            cout << n / 2 + 1 << "\n";
        }

        else
        {
            cout << n / 2 << "\n";
        }
    }
}
