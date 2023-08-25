#include <iostream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n, m;
        cin >> n >> m;
        int num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            m += num;
        }

        int no = 1;
        for (int j = 0; j < 1051; j++)
        {
            if ((j * (j + 1)) / 2 == m)
            {
                cout << "YES\n";
                no = 0;
                break;
            }
        }

        if (no)
        {
            cout << "NO\n";
        }
    }
}
