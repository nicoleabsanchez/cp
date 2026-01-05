#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int ans = -1;
        int ops = 0;

        while (x.size() < s.size())
        {
            x += x;
            ops++;
        }

        for (int i = 0; i < 2; i++)
        {
            if (x.find(s) != string::npos)
            {
                ans = ops;
                break;
            }

            x += x;
            ops++;
        }

        cout << ans << endl;
    }
    return 0;
}
