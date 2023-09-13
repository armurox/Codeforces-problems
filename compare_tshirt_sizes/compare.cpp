#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "=\n";
        }

        else if ((find(a.begin(), a.end(), 'L') != a.end() && find(b.begin(), b.end(), 'L') == b.end())
        || (count(a.begin(), a.end(), 'X') >  count(b.begin(), b.end(), 'X') && find(a.begin(), a.end(), 'L') != a.end())
        || (find(a.begin(), a.end(), 'M') != a.end() && find(b.begin(), b.end(), 'S') != b.end())
        || (count(a.begin(), a.end(), 'X') <  count(b.begin(), b.end(), 'X') && find(a.begin(), a.end(), 'S') != a.end()))
        {
            cout << ">\n";
        }

        else
        {
            cout << "<\n";
        }
    }
}
