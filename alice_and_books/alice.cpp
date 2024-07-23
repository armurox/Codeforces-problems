#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> a;
        int num;
        int n;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        cin >> num;
        cout << *max_element(a.begin(), a.end()) + num <<"\n";
    }
}
