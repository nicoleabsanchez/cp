#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i != j)
                count++;
        }
    }

    cout << count << endl;

    // cout << a*b - min(a, b) << endl;
}
