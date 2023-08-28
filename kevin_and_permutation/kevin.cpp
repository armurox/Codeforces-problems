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
        for (int j = 0; j < n / 2; j++)
        {
            cout << (n / 2) + 1 + j << " " << j + 1 << " ";
        }

        if (n % 2)
        {
            cout << n << "\n";
        }

        else
        {
            cout << "\n";
        }
    }
}
