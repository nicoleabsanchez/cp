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
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int aux;
            cin >> aux;
            freq[aux]++;
        }

        int ans = 0;

        for (auto [num, frq] : freq)
        {
            int count = 0;
            for (auto [n, f] : freq)
            {
                if (f >= frq)
                    count++;
            }
            ans = max(ans, count * frq);
        }

        cout << ans << endl;
    }
}
