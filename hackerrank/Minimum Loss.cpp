#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<long long, int> mp;
    for (int i = 0; i < n; i++)
    {
        long long price;
        cin >> price;
        mp.insert({price, i});
    }

    long long min_loss = LLONG_MAX;
    for (auto it = next(mp.begin()); it != mp.end(); it++)
    {
        auto prev_it = prev(it);
        if (it->second > prev_it->second)
        {
            continue;
        }

        min_loss = min(min_loss, it->first - prev_it->first);
    }

    cout << min_loss << endl;
}
