#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    string orig = "Timur";
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (!is_permutation(s.begin(), s.end(), orig.begin()) || n != 5)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }
    }
}
