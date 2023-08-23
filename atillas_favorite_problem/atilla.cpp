#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int str_len;
        cin >> str_len;
        string word;
        cin >> word;
        cout << (int) *max_element(word.begin(), word.end()) - 96 << "\n";
    }
}
