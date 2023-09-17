#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cn;
    cin >> cn;
    for (int i = 0; i < cn; i++)
    {
        int n;
        cin >> n;
        map<int, vector<int>> skills;
        map<int, vector<size_t>> dmgs;
        int skill;
        int num_zeros = 0;
        int num_ones = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> skill;
            if (skill == 1)
            {
                num_ones++;
                skills[skill].push_back(j);
            }

            else
            {
                num_zeros++;
                skills[skill].push_back(j);
            }
        }

        size_t sum = 0;
        size_t dmg;
        for (int j = 0; j < n; j++)
        {
            cin >> dmg;
            if (find(skills[0].begin(), skills[0].end(), j) != skills[0].end())
            {
                dmgs[0].push_back(dmg);
            }

            else
            {
                dmgs[1].push_back(dmg);
            }
        }

        sort(dmgs[0].begin(), dmgs[0].end(), greater<size_t>());
        sort(dmgs[1].begin(), dmgs[1].end(), greater<size_t>());
        // for (map<int, vector<size_t>>::iterator it = dmgs.begin(), end = dmgs.end(); it != end; ++it)
        // {
        //     cout << it -> first << ": ";
        //     for (vector<size_t>::iterator it_1 = (it -> second).begin(); it_1 != (it -> second).end(); ++it_1)
        //     {
        //         cout << " " << *it_1;
        //     }
        //     cout << "\n";
        // }

        // int diff = (num_ones - num_zeros > 0) ? num_ones - num_zeros : num_zeros - num_ones;
        int num_deletions = 0;
        int ind;
        if (num_ones > num_zeros)
        {
            ind = num_ones - 1;
            while (num_ones > num_zeros)
            {
                sum += dmgs[1][ind--];
                num_ones--;
                num_deletions++;
            }

            for (int j = 0; j < num_deletions; j++)
            {
                dmgs[1].pop_back();
            }
        }

        else if (num_ones == num_zeros)
        {
            if (dmgs[0][num_ones - 1] <= dmgs[1][num_ones - 1])
            {
                sum += dmgs[0][num_ones - 1];
                num_zeros--;
                dmgs[0].pop_back();
            }

            else
            {
                sum += dmgs[1][num_ones - 1];
                num_ones--;
                dmgs[1].pop_back();
            }
        }

        else
        {
            ind = num_zeros - 1;
            while (num_zeros > num_ones)
            {
                sum += dmgs[0][ind--];
                num_zeros--;
                num_deletions++;
            }

            for (int j = 0; j < num_deletions; j++)
            {
                dmgs[0].pop_back();
            }
        }

        for (int j = 0; j < num_zeros; j++)
        {
            sum += 2 * dmgs[0][j];
        }

        for (int j = 0; j < num_ones; j++)
        {
            sum += 2 * dmgs[1][j];
        }

        cout << sum << "\n";
    }
}
