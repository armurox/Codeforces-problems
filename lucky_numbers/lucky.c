#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int lucky = 0;
        int in;
        int fin;
        scanf("%d %d", &in, &fin);
        int digits[1000000];
        memset(digits, -1, 1000000);
        for (int j = in; j < fin + 1; j++)
        {
            int temp = j;
            int k = 0;
            int largest = -1;
            int smallest = 10;
            while (j / 10 != 0)
            {
                if (k == 0)
                {
                    digits[k++] = j % 10;
                }

                else
                {
                    digits[k] = (j / (10 * k)) % 10;
                    j /= 10; 
                    k++;
                }
                
            }

            j = temp;

            for (int l = 0; digits[l] != -1; l++)
            {
                if (digits[l] < smallest)
                {
                    smallest = digits[l];
                }

                if (digits[l] > largest)
                {
                    largest = digits[l];
                }

            }

            if (lucky < largest - smallest)
            {
                lucky = largest - smallest;
                printf("%d\n", lucky);
            }

        }
        printf("%d\n", lucky);
    }
}
