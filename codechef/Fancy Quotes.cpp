#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        bool found = false;

        while (ss >> word)
        {
            if (word == "not")
                found = true;
        }

        cout << ((found) ? "Real Fancy" : "regularly fancy") << endl;
    }
}
