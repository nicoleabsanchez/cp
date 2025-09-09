#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, k;
        cin >> k >> x;
        long long ans = x * (1 << k);
        cout << ans << endl;
    }
}