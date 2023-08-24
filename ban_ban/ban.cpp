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

        if (n % 2 == 0)
        {
            cout << n / 2 << "\n";
            for (int j = 0; j < n / 2; j++)
            {
                cout << (3 * j) + 1 << " " << 3 * n - (3 * j) << "\n";
            }
        }

        else
        {
            cout << (n / 2) + 1 << "\n";
            int index = 0;
            for (int j = 0; j < n / 2; j++)
            {
                cout << (3 * j) + 1 << " " << 3 * n - (3 * j) << "\n";
                index = (3 * j) + 1;
            }

            if (n == 1)
            {
                cout << 1 << " " << 2 << "\n";
            }

            else
            {
                cout << index + 3 << " " << index + 4 << "\n";
            }
            
        }
    }
}
