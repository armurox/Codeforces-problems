#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a;
        int num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            a.push_back(num);
        }
        num = (n == 1) ? a[0] : a[0] - a[1];
        for (int j = 1; j < n - 1; j++)
        {
            num = (j % 2) ? num + a[j + 1] : num - a[j + 1];
        }

        cout << num << "\n";
    }
}
