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

        // Todos son 0
        int suma = 0;
        for (auto c : s)
        {
            suma += c;
        }

        if (suma == 0)
        {
            cout << "Yes" << endl;
            continue;
        }
        else if (suma == n && n > 2)
        {
            cout << "Yes" << endl;
            continue;
        }

        int count = 0;
        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                count++;

            if (count >= 1 && s[i] == '0')
            {
                if (count >= 3)
                    count = 0;
                else
                {
                    cout << "No" << endl;
                    valid = false;
                    break;
                }
            }
        }

        if (valid && count > 0)
        {
            if (count < 3)
            {
                valid = false;
                cout << "No" << endl;
            }
        }

        if (valid)
            cout << "Yes" << endl;
    }
}
