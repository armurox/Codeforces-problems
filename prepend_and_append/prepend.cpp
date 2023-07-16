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
        string binary;
        cin >> binary;
        const char *binary_str = binary.c_str();
        int start_index = 0;
        int last_index = size - 1;
        while (binary_str[start_index] != binary_str[last_index] && start_index <= last_index)
        {
            start_index++;
            last_index--;
            size -= 2;
        }

        cout << size << "\n";

    }
}
