#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int seconds = y / x;
        if (z <= seconds)
            cout << 0 << endl;
        else
            cout << z - seconds << endl;
    }
}
