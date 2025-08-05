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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int count = 0, looked = 0;
        for (int i = 0; i <= n; i++)
        {
            if (looked == k)
            {
                count++;
                looked = 0;
                continue;
            }
            if (i == n)
                break;
            if (a[i] == 0)
            {
                looked++;
            }
            else
            {
                looked = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}
