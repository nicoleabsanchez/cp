#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> ans;

    for (auto c : s)
    {
        ans.insert(c);
    }

    if (ans.size() == 2)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
}
