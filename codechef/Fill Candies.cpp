#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        int ans = n / (k * m) + (n % (k * m) != 0 ? 1 : 0);
        cout << ans << endl;
    }
}