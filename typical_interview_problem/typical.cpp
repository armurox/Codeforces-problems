#include <iostream>
#include <string>

using namespace std;
int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int size;
        cin >> size;
        string f_b;
        cin >> f_b;
        string orig = "FBFFBFFBFBFFBFFBF";
        size_t found = orig.find(f_b);
        if (found == string::npos)
        {
            cout << "NO" << "\n";
        }

        else
        {
            cout << "YES" << "\n";
        }
    }
}
