#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (auto &c : s)
        c = (int(c) - 65 + n) % 26 + 65;

    cout << s << endl;
}