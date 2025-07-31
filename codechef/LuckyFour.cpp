#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        int count = 0;
        for (auto c : s)
        {
            if (c == '4')
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
