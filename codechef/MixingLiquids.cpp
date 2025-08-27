#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int syrup, water;
        cin >> syrup >> water;
        water /= 2;
        int count = 0;

        while (syrup > 0 && water > 0)
        {
            syrup--;
            water--;
            count++;
        }

        cout << count * 3 << endl;
    }
}