#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    for (int i = 0; i < m; i++)
    {
        int search;
        cin >> search;
        // si no encuentra el numero, retorna el primer mayor
        auto it = lower_bound(nums.begin(), nums.end(), search);

        if (it != nums.end() && *it == search)
        {
            cout << (it - nums.begin()) << endl;
        }
        else
            cout << -1 << endl;
    }
}