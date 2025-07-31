#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp >= x)
                count++;
        }

        cout << count << endl;
    }
    return 0;
}
