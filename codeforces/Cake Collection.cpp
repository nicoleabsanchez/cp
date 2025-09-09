#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long m;
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end(), greater<long long>());
        int stop = min<long long>(n, m); // whether min seconds or min ovens
        long long sum = 0;

        for (int i = 0; i < stop; i++)
            sum += a[i] * (m - i);

        cout << sum << endl;
    }
    return 0;