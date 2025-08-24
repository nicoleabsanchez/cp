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
        set<int> gears;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            gears.insert(temp);
        }

        if (gears.size() < n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}