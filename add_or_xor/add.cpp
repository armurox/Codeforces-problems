#include <iostream>
#include <algorithm>
#include <cmath>


int main(void)
{
    long long t;
    std::cin >> t;
    double diff;
    for (int i = 0; i < t; i++)
    {
        long long a, b, x, y;
        std::cin >> a >> b >> x >> y;
        if (a > b && (a % 2 == 0 || (a - b) > 1))
            std::cout << -1 << "\n";
        else if (a > b && a % 2 == 1 && (a - b) == 1)
            std::cout << y << "\n";     
        else
        {
            diff = (b - a);
            if (a % 2 == 0)
                std::cout << (long long) (ceil(diff / 2) * std::min(x, y) + floor(diff / 2) * x) << "\n";
            else
                std::cout << (long long) (ceil(diff / 2) * x + floor(diff / 2) * std::min(x, y)) << "\n";
        }
    }
}
