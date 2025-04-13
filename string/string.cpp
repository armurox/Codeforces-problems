#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        string::size_type pos = 0;
        int num_ones = 0;
        while ((pos = s.find("1", pos)) != string::npos)
        {
            num_ones++;
            pos += 1;
        }

        cout << num_ones << "\n";
    }
}
