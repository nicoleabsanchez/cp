#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        x %= 3;

        if (x == 0)
            cout << "NORMAL" << endl;
        else if (x == 1)
            cout << "HUGE" << endl;
        else
            cout << "SMALL" << endl;
    }
}
