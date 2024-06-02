#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string s;
        for (int j = 1; j <= 12; j++)
        {
            if (j == a || j == b) { s += "r"; }
            if (j == c || j == d) { s += "b"; }
        }

        cout << ((s == "rbrb" || s == "brbr" ) ? "YES\n" : "NO\n");
    }
}
