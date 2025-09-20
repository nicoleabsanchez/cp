// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> gas(n);
        for (int i = 0; i < n; i++)
            cin >> gas[i];

        // LOOK FOR MAX DISTANCE
        int mx = max((x - gas[n - 1]) * 2, gas[0]); // ULTIMO IDA Y VUELTA, PRIMERA ESTACION
        for (int i = 1; i < n; i++)
            mx = max(gas[i] - gas[i - 1], mx); // ESTACIONES DEL MEDIO

        cout << mx << endl;
    }
}
