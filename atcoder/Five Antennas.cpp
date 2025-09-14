#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ant(5);
    for (int i = 0; i < 5; i++)
        cin >> ant[i];
    int k;
    cin >> k;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (ant[i] - ant[j] > k)
            {
                cout << ":(" << endl;
                return 0;
            }
        }
    }

    cout << "Yay!" << endl;
}
