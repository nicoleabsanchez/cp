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
        multiset<int> s;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
            st.insert(temp);
        }

        if (n == 2 || st.size() == 1)
            cout << "Yes" << endl;
        else if (st.size() == 2)
        {
            auto it = st.begin();
            int count1 = s.count(*it);
            int count2 = s.count(*next(it));

            if (abs(count1 - count2) < 2)
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;
    }
}