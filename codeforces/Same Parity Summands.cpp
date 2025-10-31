#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        bool odd = false, even = false;

        // ODD
        if (((n - (k - 1)) % 2) == 1 && ((n - (k - 1)) % 2) > 0)
            odd = true;
        // EVEN
        else if ((n - ((k - 1) * 2)) % 2 == 0 && (n - ((k - 1) * 2)) > 0)
            even = true;

        if (odd)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
                cout << "1 ";
            cout << n - (k - 1) << endl;
        }
        else if (even)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
                cout << "2 ";
            cout << n - ((k - 1) * 2) << endl;
        }
        else
            cout << "NO" << endl;
    }
}