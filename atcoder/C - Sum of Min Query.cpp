#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    // suma inicial
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += min(a[i], b[i]);
    }

    while (q--)
    {
        char op;
        cin >> op;
        int pos;
        cin >> pos;
        pos--;
        long long num;
        cin >> num;

        // quitamos lo que se modificará en la suma inicial
        // agregaremos min de a[pos] y b[pos] actualizado asi que debemos quitarlo de la precomputed sum
        sum -= min(a[pos], b[pos]);

        // actualizamos
        if (op == 'A')
            a[pos] = num;
        else
            b[pos] = num;

        sum += min(a[pos], b[pos]);

        cout << sum << endl;
    }
}