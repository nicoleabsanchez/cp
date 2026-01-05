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

        vector<int> ans;
        ans.push_back(inp[0]);
        for (int i = 1; i < n; i++)
        {
            if (inp[i - 1] > inp[i])
            {
                ans.push_back(1);
            }

            ans.push_back(inp[i]);
        }

        cout << ans.size() << endl;
        for (int number : ans)
        {
            cout << number << " ";
        }
        cout << endl;
    }
}