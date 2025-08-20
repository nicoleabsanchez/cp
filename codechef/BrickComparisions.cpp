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
        int maxi = INT_MIN;
        int maxIndex = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp > maxi)
            {
                maxIndex = i + 1;
                maxi = temp;
            }
        }

        cout << maxIndex << endl;
    }
}
