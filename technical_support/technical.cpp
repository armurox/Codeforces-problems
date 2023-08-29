#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n;
        cin >> n;
        string word;
        cin >> word;
        int yes = 1;
        for (string::iterator it = word.begin(), l = word.end(); it != l; ++it)
        {
            if (count(it, word.end(), 'Q') > count(it, word.end(), 'A'))
            {
                cout << "No\n";
                yes = 0;
                break;
            }
        }
        
        if (yes)
        {
            cout << "Yes\n";
        }
    }
}
