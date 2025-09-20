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
        string s;
        cin >> n >> s;

        int Dcount = 0, count = 0;
        bool valid = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                Dcount++;
                count++;
                if (count >= 3)
                    valid = true;
            }
            else
                count = 0;
        }

        if (valid)
            cout << 2 << endl;
        else
            cout << Dcount << endl;
    }
}
