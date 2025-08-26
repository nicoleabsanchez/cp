#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if ((n - b) % 2 != 0)
            cout << "NO"; // leaves an odd number of blanks
        else if ((n - a) % 2 == 0)
            cout << "YES"; // both a and b leave even blanks
        else if (a < b)
            cout << "YES"; // cover all needed of blue and just leave even blanks
        else
            cout << "NO";

        cout << endl;
    }
}