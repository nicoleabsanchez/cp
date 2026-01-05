#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int friends, m;
        cin >> friends >> m;

        int left = (m >= friends ? 0 : friends - m);
        // if i have more leftshoes than i need, then i need to buy 0, otherwise, i need to buy only the diff
        int shoes_needed = left + friends;
        // need to buy all right shoes_needed

        cout << shoes_needed << endl;
    }
}
