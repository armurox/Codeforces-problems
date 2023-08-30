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
        int x = count(word.begin(), word.end(), '1');
        int y = count(word.begin(), word.end(), '0');
        int num_breaks = 0;
        size_t pos = 0;
        string substr = "10";
        while ((pos = word.find(substr, pos)) != string::npos) {
          ++num_breaks;
          pos += substr.length();
   }
        // Max cost
        int max_cost = (x > y) ? x * x : y * y;
        if (num_breaks > 1)
        {
            max_cost = x * y;
        }
        cout << max_cost << "\n";
    }
}
