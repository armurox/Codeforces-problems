#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
int main()
{
    int case_num;
    scanf("%d", &case_num);
    string pi = "314159265358979323846264338327";
    for (int i = 0; i < case_num; i++)
    {
        string word;
        int num_valid = 0;
        cin >> word;
        word.c_str();
        for (int j = 0; word[j] != '\0'; j++)
        {
            if (word[j] != pi[j])
            {
                break;
            }
            num_valid++;
        }

        printf("%d\n", num_valid);
    }
}
