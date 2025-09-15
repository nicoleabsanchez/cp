#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum = 0, auxsum = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            sum += temp; // SUMA TOTAL

            if (temp > k)
            {
                temp = k;
            }

            auxsum += temp; // SUMA AUXILIAR
        }

        cout << sum - auxsum << endl;
    }
}