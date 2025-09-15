#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    int count = 0;
    for (int i = 0; i < n; i++)
        cin >> ans[i];

    for (int i = 1; i <= n - 2; i++)
    {
        if ((ans[i - 1] <= ans[i] && ans[i] <= ans[i + 1]) || (ans[i + 1] <= ans[i] && ans[i] <= ans[i - 1]))
        {
            count++;
        }
    }

    cout << count << endl;
}
