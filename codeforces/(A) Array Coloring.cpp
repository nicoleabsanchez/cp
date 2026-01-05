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

        int ocount = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 1)
                ocount++;
        }

        if (ocount % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}