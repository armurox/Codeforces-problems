#include <iostream>


int main(void)
{
    long long t;
    std::cin >> t;
    long long diff;
    for (int i = 0; i < t; i++)
    {
        long long a, b, x, y;
        std::cin >> a >> b >> x >> y;
        if (a > b && ((a - b) > 1 || a % 2 == 0))
            std::cout << -1 << "\n";
        else if (a > b && a % 2 == 1 && (a - b) == 1 and y <= x)
            std::cout << y << "\n";
        else if (x <= y and b > a)
            std::cout << (b - a) * x << "\n";
        else if ((b - a) % 2 == 0)
        {
            diff = (b - a) / 2;
            std::cout << diff * y + diff * x << "\n";
        }
        
        else
        {
            diff = (b - a) / 2;
            if (a % 2 == 0)
                std::cout << (diff + 1) * y + diff * x << "\n";
            else
                std::cout << (diff + 1) * x + diff * y << "\n";
        }
    }
}
