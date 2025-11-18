#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> teams(n); // problems, penalty

    for (int i = 0; i < n; i++)
    {
        cin >> teams[i].first >> teams[i].second;
    }

    sort(teams.begin(), teams.end(), [](pair<int, int> a, pair<int, int> b)
         {
             if (a.first != b.first)
                 return a.first > b.first; // Mas problemas primero

             return a.second < b.second; // Menos tiempo primero
         });

    // 0 indexed
    int target_problems = teams[k - 1].first;
    int target_penalty = teams[k - 1].second;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (teams[i].first == target_problems && teams[i].second == target_penalty)
            count++;
    }

    cout << count << endl;
}
