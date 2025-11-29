#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "";

    for (char c : s)
    {
        if (!ans.empty() && ans.back() == c)
        {
            ans.pop_back();
        }
        else
            ans.push_back(c);
    }

    cout << ans << endl;
}
