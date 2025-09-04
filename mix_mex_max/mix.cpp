#include <iostream>
#include <vector>
#include <unordered_set>

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
        unordered_set<int> u;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;   
            u.insert(temp);
        }

        if (u.contains(0))
        {
            cout << "NO\n";
            continue;
        }

        if ((u.size() == 2 && u.contains(-1)) || u.size() == 1)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
}
