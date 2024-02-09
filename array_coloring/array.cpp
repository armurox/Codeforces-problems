#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int first;
        cin >> first;
        int sum = 0;
        int num;
        for (int j = 1; j < n; j++)
        {
            cin >> num;
            sum += num;
        }

        if ((first % 2) == (sum % 2))
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}
