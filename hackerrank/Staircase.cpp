#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int espacios = 0; espacios < n - i; espacios++)
            cout << " ";

        for (int numeral = 0; numeral < i; numeral++)
            cout << "#";
        cout << endl;
    }
}
