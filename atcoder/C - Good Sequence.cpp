#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<int> ms;
    set<int> s;
    int cuenta = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ms.insert(temp);
        s.insert(temp);
    }

    for (int number : s)
    {
        int c = ms.count(number);

        if (c == number)
            continue;

        if (c < number)
            cuenta += c;
        else
            cuenta += (c - number);
    }

    cout << cuenta << endl;
}
