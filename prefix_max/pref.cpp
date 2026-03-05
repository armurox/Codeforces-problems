#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int n;
    int temp;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        cout << n * (*max_element(v.begin(), v.end())) << '\n';
    }
}
