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
        string s = "";
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (k >= a)
            {
                s += "1";
                k -= a;
            }
            else
                s += "0";
        }

        cout << s << endl;
    }
    return 0;
}
