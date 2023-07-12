#include <iostream>
#include <string>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n, m;
        cin >> n >> m;
        string f;
        string s;
        cin >> f >> s;
        size_t fdb = f.find("BB");
        size_t fdr = f.find("RR");
        size_t ftb = f.find("BBB");
        size_t ftr = f.find("RRR");
        size_t sdb = s.find("BB");
        size_t sdr = s.find("RR");
        size_t stb = s.find("BBB");
        size_t str = s.find("RRR");
        size_t sub_fdb = s.substr(1, n - 2).find("BB");
        size_t sub_fdr = s.substr(1, n - 2).find("RR");
        size_t sub_sdb = s.substr(1, m - 2).find("BB");
        size_t sub_sdr = s.substr(1, m - 2).find("RR");
        if (ftr != string::npos || ftb != string::npos || str != string::npos || stb != string::npos)
        {
            cout << "NO\n";
        }

        else if (f[n - 1] == s[m - 1] && (fdr != string::npos || fdb != string::npos || sdr != string::npos || sdb != string::npos))
        {
            cout << "NO\n";
        }

        else if (f[n - 1] != s[m - 1] && ((sub_fdr != string::npos && n != 1) || (sub_fdb != string::npos && n != 1) || (sub_sdr != string::npos && m != 1) || (sub_sdb != string::npos && m != 1)))
        {
            cout << "NO\n";
        }

        else if (f[n - 1] != s[m - 1] && ((fdr != string::npos && sdb != string::npos) || (fdb != string::npos && sdr != string::npos)))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}
