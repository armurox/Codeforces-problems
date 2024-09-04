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
        cout << ((s[0] == s.back()) ? "NO\n" : "YES\n");
    }
}