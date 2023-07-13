#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        size_t str_size;
        cin >> str_size;
        cin.ignore();
        string line;
        string substring;
        string prefix;
        string suffix;
        getline(cin, line);
        istringstream is(line);
        int count = 0;
        while (is >> substring)
        {
            if (substring.length() == str_size - 1 && count == 0)
            {
                prefix = substring;
                count++;
            }

            else if (substring.length() == str_size - 1 && count == 1)
            {
                suffix = substring;
            }
        }
        string temp;
        if (suffix.substr(1, str_size - 2) == prefix.substr(0, str_size - 2))
        {
            temp = suffix;
            suffix = prefix;
            prefix = temp;
        }

        string orig = prefix + suffix[str_size - 2];
        temp = orig;
        reverse(orig.begin(), orig.end());
        if (orig == temp)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}
