#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int size;
        cin >> size;
        cin.ignore();
        string line;
        getline(cin, line);
        istringstream iss(line);
        int digit;
        int num_one_spells = 0;
        int num_ones = 0;
        int num_spells;
        int incremented = 0;
        while(iss >> digit)
        {
            if (digit == 1)
            {
                num_ones++;
                incremented = 1;
            }

            if (num_ones % 2 == 0 && incremented == 1)
            {
                num_one_spells++;
                incremented = 0;
            }
        }


        num_spells = size - (num_one_spells);

        cout << num_spells << "\n";
    }

}
