#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int pos1, posN;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
                pos1 = i;
            else if (temp == n)
                posN = i;
        }

        int ans = pos1 + (n - 1 - posN);
        if (pos1 > posN)
            ans--;
        cout << ans << endl;
    }
}