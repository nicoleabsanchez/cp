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
        string s;
        cin >> s;
        bool three_cons = false;

        int count = 0;
        int dots = 0;
        for (auto c : s)
        {
            if (c == '.')
            {
                count++;
                dots++;
                if (count >= 3)
                {
                    three_cons = true;
                    break;
                }
            }
            else
                count = 0;
        }

        if (three_cons)
            cout << 2 << endl;
        else
            cout << dots << endl;
    }
}
