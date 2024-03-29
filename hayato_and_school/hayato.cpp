#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int n;
        scanf("%d", &n);
        int num_odd = 0;
        int num_even = 0;
        int *arr = (int*) malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", arr + j); 
            if (arr[j] % 2)
            {
                num_odd++;
            }

            else
            {
                num_even++;
            }
        }
        
        int count = 0;
        if (num_odd >= 3)
        {
            printf("YES\n");
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % 2)
                {
                    printf("%d ", j + 1);
                    count++;
                }

                if (count == 3)
                {
                    break;
                }  
            }
            printf("\n");
        }

        else if (num_even >= 2 && num_odd >= 1)
        {
            printf("YES\n");
            int num_even_count = 0;
            int num_odd_count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % 2 && num_odd_count < 1)
                {
                    printf("%d ", j + 1);
                    count++;
                    num_odd_count++;
                }

                else if (arr[j] % 2 == 0 && num_even_count < 2)            
                {
                    printf("%d ", j + 1);
                    count++;
                    num_even_count++;
                }

                if (count == 3)
                {
                    break;
                }

            }
            printf("\n");
        }

        else
        {
            printf("NO\n");
        }

        free(arr);
    }
}
