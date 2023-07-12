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
        int fdb = f.find("BB");
        int fdr = f.find("RR");
        int ftb = f.find("BBB");
        int ftr = f.find("RRR");
        int sdb = s.find("BB");
        int sdr = s.find("RR");
        int stb = s.find("BBB");
        int str = s.find("RRR");
        if (ftr != string::npos || ftb != string::npos || str != string::npos || stb != string::npos)
        {
            cout << "NO\n";
        }

        else if ()
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }
    }
}
