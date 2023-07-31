#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int case_num;
    scanf("%d", &case_num);
    for (int i = 0; i < case_num; i++)
    {
        int w, d, h;
        scanf("%d %d %d", &w, &d, &h);
        int a, b, f, g;
        scanf("%d %d %d %d", &a, &b, &f, &g);
        vector<int> possible_lengths = {f + a + abs(g - b), g + b + abs(f - a), w - f + w - a + abs(g - b), d - g + d - b + abs(f - a)};
        int min_length = h + *min_element(possible_lengths.begin(), possible_lengths.end());
        printf("%d\n", min_length);
    }
}
