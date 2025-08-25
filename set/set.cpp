#include <iostream>

int main(void)
{
    int t;
    std::cin >> t;
    long long l, r, k;
    long long ans;
    for (int i = 0; i < t; i++)
    {
        std::cin >> l >> r >> k;
        ans = ((long long) (r / k)) - l + 1;
        std::cout << ((ans > 0) ? ans : 0) << '\n';
    }
}
