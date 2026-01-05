#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            st.insert(temp);
        }

        if (st.find(k) != st.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}