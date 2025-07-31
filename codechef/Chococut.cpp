#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int menor = min(a, b), mayor = max(a, b), n = a * b, max_alice = 0;
        int i = 1;

        if (k == n)
        {
            cout << 0 << endl;
            continue;
        }
        else if (k == 0)
        {
            cout << n << endl;
            continue;
        }

        while (i * menor <= n || i * mayor <= n)
        {
            if (i * menor >= k && i * menor <= n)
            {
                max_alice = max(max_alice, n - i * menor);
            }
            else if (i * mayor >= k && i * mayor <= n)
            {
                max_alice = max(max_alice, n - i * mayor);
            }
            i++;
        }

        cout << max_alice << endl;
    }

    return 0;
}
