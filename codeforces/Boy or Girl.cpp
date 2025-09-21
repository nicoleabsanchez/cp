#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> ans;
    for (char c : s)
        ans.insert(c);

    cout << ((ans.size() % 2 != 0) ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
}
