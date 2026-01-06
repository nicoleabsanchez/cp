#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int diff = y - x;
        int actual_games = diff / 8;
        int one_more = diff % 8;

        if (one_more > 0)
            actual_games++;

        cout << actual_games << endl;
    }
}
