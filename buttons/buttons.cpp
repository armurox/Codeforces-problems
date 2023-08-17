#include <iostream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a > b)
        {
            cout << "First\n";
        }

        else if (b > a)
        {
            cout << "Second\n";
        }

        // Cases when a and b are equal in number
        else if (c % 2)
        {
            cout << "First\n";
        }

        else
        {
            cout << "Second\n";
        }
    }
}
