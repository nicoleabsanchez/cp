#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    long long last = 3, step = 3;

    while (t > last)
    {
        step *= 2;
        last += step;
    }

    cout << last - t + 1 << endl;
}
