#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int size;
        scanf("%d", &size);
        char *arr = (char*) malloc(size + 1);
        scanf("%s", arr);
        int no = 0;
        for (int j = 0; j < size / 2; j++)
        {
            if (arr[j] != arr[size - j - 1] && arr[j + 1] != arr[size - j - 2])
            {
                printf("NO\n");
                no = 1;
            }
        }

        if (!no)
        {
            printf("YES\n");
        }
        free(arr);
    }
}
