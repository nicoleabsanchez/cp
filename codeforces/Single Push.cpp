#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> a(n), b(n), diff(n);
        bool valid = true;
        int z_count = 0;

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            diff[i] = b[i] - a[i];
            if (diff[i] < 0)
            {
                cout << "NO" << endl;
                valid = false;
                break;
            }
            else if (diff[i] == 0)
                z_count++;
        }

        if (!valid)
            continue;
        if (z_count == n)
        {
            cout << "YES" << endl;
            continue;
        }

        vector<int> lilgroup;
        int count = 0, chosen;
        bool done = false;
        for (int i = 0; i < n; i++)
        {
            if (!done && diff[i] > 0)
            {
                chosen = diff[i];
                done = true;
                count++;
                continue;
            }

            if (diff[i] == chosen && done)
                count++;

            if (diff[i] != chosen && done)
                break;
        }

        if (n - z_count != count)
            valid = false;
        if (valid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
