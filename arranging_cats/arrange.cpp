#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s, f;
        cin >> s >> f;
        int ntr = 0;
        int nta = 0;
        for (int j = 0; j < n; j++)
        {
            if (s.at(j) == '1' && f.at(j) == '0')
            {
                ntr++;
            }

            else if (s.at(j) == '0' && f.at(j) == '1')
            {
                nta++;
            }
        }

        int result = (ntr > nta) ? ntr : nta;
        cout << result << "\n";

    }
}
