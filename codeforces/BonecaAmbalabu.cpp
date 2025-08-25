// Source: https://usaco.guide/general/io

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
        vector<int> v(n);
        vector<int> ones(30), zeros(30);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (int j = 0; j < 30; j++)
            {
                if (v[i] & (1 << j))
                    ones[j]++;
                else
                    zeros[j]++;
            }
        }

        long long max_sum = 0;

        for (int i = 0; i < n; i++)
        { // let's try all k's
            long long current_sum = 0;

            for (int j = 0; j < 30; j++)
            {
                if (v[i] & (1 << j))
                    current_sum += (1LL << j) * zeros[j];
                else
                    current_sum += (1LL << j) * ones[j];
            }

            max_sum = max(current_sum, max_sum);
        }

        cout << max_sum << endl;
    }
}