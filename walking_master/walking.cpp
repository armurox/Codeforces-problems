#include <iostream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int a, b, c, d;
        int num_moves = 0;
        cin >> a >> b >> c >> d;
        if (b > d)
        {
            cout << -1 << endl;
            continue;
        }

        num_moves = d - b;
        a += num_moves;
        if (a < c)
        {
            cout << -1 << endl;
            continue;
        }

        num_moves += a - c;
        cout << num_moves << endl;
    }
}
