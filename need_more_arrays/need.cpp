#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int curr;
    int prev;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int num_arrays{ 1 };
        cin >> curr;
        prev = curr;
        for (int j = 1; j < n; j++)
        {
            cin >> curr;
            if (curr > prev + 1)
            {
                num_arrays++;
                prev = curr;
            }
        }
        cout << num_arrays << '\n';
    }
}
