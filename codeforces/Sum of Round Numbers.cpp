#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        int power = 0;

        while (n > 0)
        {
            int temp = n % 10;
            int aux = pow(10, power) * temp;
            if (aux > 0)
                nums.push_back(aux);
            n /= 10;
            power++;
        }

        cout << nums.size() << "\n";
        for (auto n : nums)
            cout << n << " ";
        cout << "\n";
    }
}
