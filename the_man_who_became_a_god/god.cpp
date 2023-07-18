#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int case_num;
    cin >> case_num;

    for (int i = 0; i < case_num; i++)
    {
        int n;
        int k;
        int min_pow = 0;
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        // WHen k and n are equal, the minimum power of the group is 0, so we ignore that case
        int num_groups = 0;
        if (k < n)
        {
            while (num_groups < k - 1)
            {
                 
                num_groups++;
            }
        }
        
    }
}
