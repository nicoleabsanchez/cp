#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> nums(2 * n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        nums[n + i] = nums[i];
    }

    int indice = 0;
    while (q--)
    {
        char op;
        cin >> op;
        int d;
        cin >> d;
        if (op == 'R')
        {
            cout << nums[indice + d - 1] << endl;
        }
        else if (op == 'C')
        {
            indice += d;
        }
        else
            indice -= d; // counterclockwise

        indice %= n; // reducir
        indice += n; // convertir en positivo si es que es negativo
        indice %= n; // volver al rango
    }
}
