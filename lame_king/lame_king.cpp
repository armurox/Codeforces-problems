#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int a, b;
        cin >> a >> b;
        int num_secs;
        if (abs(a) > abs(b))
        {
            num_secs = 2 * abs(a) - 1;
        }

        else if (abs(b) > abs(a))
        {
            num_secs = 2 * abs(b) - 1;
        }

        else
        {
            num_secs = 2 * abs(a);
        }
        cout << num_secs << endl;
    }
}