#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long annab = a + (c + 1) / 2;
        long long katieb = b + (c / 2);

        if (annab > katieb)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}
