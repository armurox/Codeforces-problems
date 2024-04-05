#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        vector<string> words;
        string word;
        for (int j = 0; j < n; j++)
        {
            cin >> word;
            words.push_back(word);
        }

        int diff = 0;
        int min_diff;
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = 0; l < m; l++)
                {
                    diff += abs((int) words[j][l] - words[k][l]);
                }
                if (j == 0 && k == 1)
                {
                    min_diff = diff;
                }

                else if (diff < min_diff)
                {
                    min_diff = diff;
                }

                diff = 0;
            }
        }

        cout << min_diff << "\n";
    }
}
