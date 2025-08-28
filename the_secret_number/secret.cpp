#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        std::cin >> n;
        long long x = 11;
        bool found = false;
        std::vector<long long> ans;
        while (n >= x)
        {
            if (n % x == 0)
                ans.push_back(n / d);
            x = (x - 1) * 10 + 1;
        }

        std::cout << ans.size() << '\n';
        for (int i = (int) ans.size() - 1; i >= 0; --i)
        {
            std::cout << ans[i] << ' ';
            found = true;
        }
        if (found)
            std::cout << '\n';
    }
}
