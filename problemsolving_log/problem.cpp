#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<char, int> let_map;
    for (int i = 1; i < 27; i++)
    {
        let_map[(char) (i + 64)] = i;
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        unordered_map<char, int> let_map_c = let_map;
        int n;
        string probs;
        cin >> n;
        cin >> probs;
        int num_solved = 0;
        for (int j = 0; j < n; j++)
        {
            let_map_c[probs[j]]--;
            if (let_map_c[probs[j]] == 0)
            {
                num_solved++;
            }
        }

        cout << num_solved << "\n";
    }
}
