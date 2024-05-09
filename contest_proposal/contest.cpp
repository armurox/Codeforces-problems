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
        vector<size_t> a;
        vector<size_t> b;
        size_t num;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            a.push_back(num);
        }

        for (int j = 0; j < n; j++)
        {
            cin >> num;
            b.push_back(num);
        }

        int count = 0;
        for (int j = 0; j < n - count; j++)
        {
            while ((j + count) < n && a[j] > b[j + count])
            {
                count++;
            }
        }

        cout << count << "\n";
    }
}
