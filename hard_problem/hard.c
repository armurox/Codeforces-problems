#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long m, a, b, c;
        scanf("%lld%lld%lld%lld", &m, &a, &b, &c);
        long long first = (m - a > 0) ? a : m;
        long long second = (m - b > 0) ? b : m;
        long long temp_first = first;
        long long temp_second = second;

        if (first < second)
        {
            first += (c < m - first) ? c : m - first;
            c = (c < m - temp_first) ? 0 : (c - (m - temp_first));
            second += (c < m - second) ? c : m - second;
            c = (c < m - temp_second) ? 0 : (c - (m - temp_second));
        }

        else
        {
            second += (c < m - second) ? c : m - second;
            c = (c < m - temp_second) ? 0 : (c - (m - temp_second));
            first += (c < m - first) ? c : m - first;
            c = (c < m - temp_first) ? 0 : (c - (m - temp_first));
        }

        printf("%lld\n", first + second);
        
    }
}
