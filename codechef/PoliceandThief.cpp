#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int segundos = abs(x - y);
        cout << segundos << endl;
    }
    return 0;
}
