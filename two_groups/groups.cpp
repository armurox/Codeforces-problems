#include <iostream>

using namespace std;

int main()
{
    int case_num;
    cin >> case_num;
    for (int i = 0; i < case_num; i++)
    {
        int n;
        cin >> n;
        int num;
        long long pos_sum = 0;
        long long neg_sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            if (num > 0)
            {
                pos_sum += num;
            }

            else if (num < 0)
            {
                neg_sum += -num;
            }
        }

        long long output = (pos_sum > neg_sum) ? pos_sum - neg_sum : neg_sum - pos_sum;
        cout << output << "\n";
    }
}
