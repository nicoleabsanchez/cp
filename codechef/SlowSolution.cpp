#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
        int countMN = 0;
        int took = maxT;
        while (maxT--)
        {
            if (sumN >= maxN)
            {
                sumN -= maxN;
                countMN++;
                took--;
            }
        }

        if (took > 0)
            cout << int(pow(sumN, 2) + countMN * pow(maxN, 2)) << endl;
        else
            cout << int(countMN * pow(maxN, 2)) << endl;
    }

    return 0;
}
