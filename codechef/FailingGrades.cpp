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
        int sum = 0;
        bool keeps_it = true;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
            int average = sum / (i + 1);

            if (average < 40)
            {
                keeps_it = false;
            }
        }

        cout << (keeps_it ? "Yes" : "No") << endl;
    }
    return 0;
}
