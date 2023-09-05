#include <iostream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n, k;
        cin >> n >> k;
        int num;
        int yes = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (num == 1)
            {
                yes = 1;
            }
        }

        if (yes)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}
