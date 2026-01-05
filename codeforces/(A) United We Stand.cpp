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
        vector<int> inp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
        }

        vector<int> b, c;
        int mx = *max_element(inp.begin(), inp.end());
        for (int i = 0; i < n; i++)
        {
            if (inp[i] == mx)
            {
                c.push_back(inp[i]);
            }
            else
                b.push_back(inp[i]);
        }

        if (b.size() == 0)
        {
            cout << -1 << endl;
            continue;
        }

        cout << b.size() << " " << c.size() << endl;
        for (int num : b)
            cout << num << " ";
        cout << endl;

        for (int num : c)
            cout << num << " ";
        cout << endl;
    }
}
