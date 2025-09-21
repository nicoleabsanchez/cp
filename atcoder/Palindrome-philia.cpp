#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < (s.size() + 1) / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
            count++;
    }

    cout << count << endl;
}