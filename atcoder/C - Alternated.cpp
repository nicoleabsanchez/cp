#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    string s;
    cin >> s;

    vector<long long> pos_a;
    for (long long i = 0; i < 2 * n; i++)
    {
        if (s[i] == 'A')
        {
            pos_a.push_back(i);
        }
    }

    long long cost1 = 0; // ABABAB
    long long cost2 = 0; // BABABA

    for (long long i = 0; i < n; i++)
    {
        cost1 += abs(pos_a[i] - (2 * i));

        cost2 += abs(pos_a[i] - (2 * i + 1));
    }

    cout << min(cost1, cost2) << endl;

    return 0;
}
