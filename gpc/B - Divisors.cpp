#include <bits/stdc++.h>
using namespace std;

int count_divisors(long long n)
{
    int count = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
                count++;
            else
                count += 2;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    long long lb, up;
    for (int i = 0; i < n; i++)
    {
        int max_divisors = 0;
        int number = 0;
        cin >> lb >> up;

        for (long long l = lb; l <= up; l++)
        {
            int divs = count_divisors(l);
            if (divs > max_divisors)
            {
                max_divisors = divs;
                number = l;
            }
        }

        cout << "Between " << lb << " and " << up << ", " << number << " has a maximum of " << max_divisors << " divisors." << endl;
    }
}
