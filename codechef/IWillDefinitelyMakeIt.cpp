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
        int i, j, curr;
        k--;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        curr = a[k];

        sort(a.begin(), a.end());
        for (i = 0; i < n; i++)
        {
            if (a[i] == curr)
                break;
        }

        int water = 1;
        for (j = i; j < n - 1; j++)
        {
            // if before leaving i dont die and once i get to the next i wont die either
            if (water + a[j + 1] - a[j] - 1 <= a[j] && water + a[j + 1] - a[j] <= a[j + 1])
            {
                water += a[j + 1] - a[j];
            }
            else
                break;
        }

        if (j == n - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
