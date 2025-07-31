#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int value_a = a * 10, value_b = b * 5;
        if (value_a > value_b)
            cout << "FIRST" << endl;
        else if (value_a < value_b)
            cout << "SECOND" << endl;
        else
            cout << "ANY" << endl;
    }
    return 0;
}