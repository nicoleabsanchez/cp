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
        vector<int> numbers(n);
        for (int i = 0; i < n; i++)
            cin >> numbers[i];

        sort(numbers.begin(), numbers.end());

        int count = 0;

        for (int i = 0; i <= n / 2; i++)
        {
            if (count < n)
            {
                cout << numbers[i] << " ";
                count++;
            }

            if (count < n)
            {
                cout << numbers[n - 1 - i] << " ";
                count++;
            }
        }

        cout << endl;
    }
    return 0;
}
