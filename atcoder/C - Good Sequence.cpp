#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> hp; // number, freq
    int n;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        hp[temp]++;
    }

    for (auto pair : hp)
    {
        if (pair.first == pair.second)
            continue;

        if (pair.first > pair.second)
            count += pair.second;
        else
            count += (pair.second - pair.first);
    }

    cout << count << endl;
}
