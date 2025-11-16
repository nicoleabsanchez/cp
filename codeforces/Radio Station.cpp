#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> hp;
    for (int i = 0; i < n; i++)
    {
        string s_name, ip;
        cin >> s_name >> ip;
        hp.insert({ip, s_name});
    }

    for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;
        ip = ip.substr(0, ip.size() - 1); // remove the ;

        auto it = hp.find(ip);
        string s_name = it->second;

        cout << command << " " << ip << "; #" << s_name << endl;
    }
}
