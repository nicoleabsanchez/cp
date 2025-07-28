#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> players(n);

        for (int i = 0; i < n; i++)
            cin >> players[i];

        int winner = -1;
        int minMoves = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int p = players[i];
            if (k % p == 0)
            {
                int moves = (k / p) - 1;
                if (moves < minMoves)
                {
                    winner = p;
                    minMoves = moves;
                }
            }
        }

        cout << winner << endl;
    }

    return 0;
}
