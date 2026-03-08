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
        int a[100010];
        for(int j = 0; j < n; j++)
            cin >> a[j];
        if (a[0] + a[n - 1] == 0)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
        
}
