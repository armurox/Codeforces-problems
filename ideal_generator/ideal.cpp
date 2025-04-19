#include <iostream>

int main(void)
{
    int t;
    std::cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        std::cout << (n % 2 ? "YES\n" : "NO\n");
    }
}
