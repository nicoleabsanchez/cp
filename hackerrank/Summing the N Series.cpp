#include <bits/stdc++.h>
using namespace std;

#define val 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = ((n % val) * (n % val)) % val;
        cout << ans << endl;
    }
}
