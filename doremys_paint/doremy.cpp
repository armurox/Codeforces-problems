#include <iostream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    int n;
    int skip;
    for (int i = 0; i < case_num; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> skip;
        }
        cout << 1 << " " << n << "\n";
    }
}
