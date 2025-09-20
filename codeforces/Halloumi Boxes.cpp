#include <bits/stdc++.h>
using namespace std;

bool sorted(vector<int> &vec)
{
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i - 1] > vec[i])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        if (k > 1)
            cout << "YES" << "\n";
        else if (sorted(vec))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
