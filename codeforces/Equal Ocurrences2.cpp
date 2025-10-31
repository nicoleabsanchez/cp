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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            temp--;
            a[temp]++;
        }

        sort(a.begin(), a.end());

        int ans = 0;
        for (int i = 0; i < n; i++)
            ans = max(ans, (n - i) * a[i]);

        cout << ans << endl;
    }
}
