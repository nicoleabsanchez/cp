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
        int to_find;
        cin >> to_find;
        set<int> marbles;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            marbles.insert(a);
        }

        cout << to_find - marbles.size() << endl;
    }
    return 0;
}
