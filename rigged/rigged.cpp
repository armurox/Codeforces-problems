#include <iostream>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        int s, e;
        cin >> s >> e;
        int m_s = s;
        int m_e = e;
        bool valid = true;
        for (int j = 1; j < n; j++)
        {
            cin >> s >> e;
            if (s >= m_s && e >= m_e)
            {
                cout << -1 << "\n";
                valid = false;
                break;
            }
        }

        if (valid)
        {
            cout << m_s << "\n";
        }
    }
}
