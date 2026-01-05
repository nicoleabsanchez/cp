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
        vector<int> ps(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ps[i];
        }

        for (int i = 1; i < n; i++)
        {
            ps[i] += ps[i - 1];
        }

        bool possible = false;

        for (int i = 0; i < n; i++)
        {
            int parity = (ps[n - 1] - ps[i]) % 2;

            if (parity == ps[i] % 2)
            {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}