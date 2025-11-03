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
        int k;
        cin >> k;

        vector<string> to_find(n);
        for (int i = 0; i < n; i++)
            cin >> to_find[i];

        // dictionary
        set<string> dictio;

        for (int i = 0; i < k; i++)
        {
            int num;
            cin >> num;
            for (int j = 0; j < num; j++)
            {
                string a;
                cin >> a;
                dictio.insert(a);
            }
        }

        for (string t : to_find)
        {
            auto it = dictio.find(t);

            if (it != dictio.end())
                cout << "YES ";
            else
                cout << "NO ";
        }
        cout << endl;
    }
}
