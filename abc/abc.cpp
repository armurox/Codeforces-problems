#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << ((n > 2 || ((n == 2) && (s.at(0) == s.at(1)))) ? "NO\n" : "YES\n");
    }
}
