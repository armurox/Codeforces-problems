#include <iostream>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        int max = 0;
        int num;
        int index;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (num > max)
            {
                max = num;
                index = j + 1;
            }
        }

        cout << index << "\n";
    }
}
