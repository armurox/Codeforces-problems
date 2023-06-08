#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Equation used is: x(n) = (n + 1)^2 + 1;
    int case_num;
    scanf("%ld", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        long roll_size;
        scanf("%ld", &roll_size);
        long choc_amt = (roll_size + 1) * (roll_size + 1) + 1;

        printf("%ld\n", choc_amt);
    }
    
}
