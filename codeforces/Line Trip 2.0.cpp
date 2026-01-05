#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        vector<int> stations(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stations[i];
        }

        int max_diff = stations[0];
        for (int i = 1; i < n; i++)
        {
            max_diff = max(max_diff, stations[i] - stations[i - 1]);
        }

        cout << max(max_diff, (x - stations[n - 1]) * 2) << endl;
    }
}