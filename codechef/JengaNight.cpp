#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        cout << (x % n == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
