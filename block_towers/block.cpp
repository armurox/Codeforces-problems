#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n;
        cin >> n;
        // vector<int> nums;
        int count = 0;
        string line;
        getline(cin, line);
        istringstream iss(line);
        long long num;
        long long first_num;
        while (iss >> num)
        {
            count += 1;
            if (count == 1)
            {
                first_num = num;
            }
            
            if (num > first_num)
            {
                if ((num - first_num) % 2 == 0)
                {
                    first_num += (num - first_num);
                }

                else
                {
                    first_num += (num - first_num) - 1;
                }
                
            }
        }

        cout << first_num << "\n";
    }
}
