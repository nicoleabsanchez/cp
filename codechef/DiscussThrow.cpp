#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int max = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            int temp;
            cin >> temp;
            if (temp > max)
                max = temp;
        }

        cout << max << endl;
    }
    return 0;
}
