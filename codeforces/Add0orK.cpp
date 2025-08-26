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
        long long k;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            long long e = temp % (k + 1); // e is the times of k i will need
            long long new_a = temp + e * k;
            cout << new_a << " ";
        } // to force a number to be divisible by k+1, new = old + (old % (k+1)) * k

        cout << endl;
    }
}
