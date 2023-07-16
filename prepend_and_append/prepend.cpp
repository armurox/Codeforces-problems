#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Identify number of test cases
    int case_num;
    cin >> case_num;
    // Loop through all the test cases
    for (int i = 0; i < case_num; i++)
    {
        int size;
        cin >> size;
        string binary;
        cin >> binary;
        // Convert cpp string into C string (null-terminated character array)
        const char *binary_str = binary.c_str();
        int start_index = 0;
        int last_index = size - 1;
        // Detect differing characters at end of string, and reduce size by 2
        while (binary_str[start_index] != binary_str[last_index] && start_index <= last_index)
        {
            start_index++;
            last_index--;
            size -= 2;
        }

        cout << size << "\n";

    }
}
