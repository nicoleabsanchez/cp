#include <bits/stdc++.h>
using namespace std;

string perfection_level(int n)
{
    if (n == 1)
        return "DEFICIENT";
    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
                sum += i;
            else
            {
                sum += i;
                sum += (n / i);
            }
        }
        if (sum > n)
            return "ABUNDANT";
    }

    return sum == n ? "PERFECT" : "DEFICIENT";
}

int digits(int n)
{
    int digits = 0;
    while (n > 0)
    {
        digits++;
        n /= 10;
    }
    return digits;
}

int main()
{
    int n;
    cout << "PERFECTION OUTPUT" << endl;
    while (cin >> n)
    {
        if (n == 0)
            break;

        int dig = digits(n);
        string spaces = "";
        for (int i = 0; i < 5 - dig; i++)
            spaces += " ";

        cout << spaces << n << "  " << perfection_level(n) << endl;
    }
    cout << "END OF OUTPUT" << endl;
}
