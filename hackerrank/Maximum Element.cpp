#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> st;
    stack<int> st_mx;

    for (int i = 0; i < n; i++)
    {
        int op;
        cin >> op;

        switch (op)
        {
        case 1:
        {
            int number;
            cin >> number;
            st.push(number);

            if (st_mx.empty())
            {
                st_mx.push(number);
            }
            else
            {
                st_mx.push(max(number, st_mx.top()));
            }
            break;
        }
        case 2:
        {
            st.pop();
            st_mx.pop();
            break;
        }
        case 3:
        {
            cout << st_mx.top() << endl;
            break;
        }
        }
    }
}