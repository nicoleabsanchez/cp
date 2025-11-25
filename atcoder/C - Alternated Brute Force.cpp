#include <bits/stdc++.h>
using namespace std;

int simulate_swaps(char first, string s)
{
    int n = s.size();
    int swaps = 0;

    for (int i = 0; i < n; i++)
    {
        char expected = (i % 2 == 0) ? first : (first == 'A' ? 'B' : 'A');

        if (s[i] != expected)
        {
            int j = i + 1;
            while (j < n && s[j] != expected)
            {
                j++;
            }

            while (j > i)
            {
                swap(s[j], s[j - 1]);
                swaps++;
                j--;
            }
        }
    }

    return swaps;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;

    // simulate starting with a and b
    int swaps_a = simulate_swaps('A', s);
    int swaps_b = simulate_swaps('B', s);

    cout << min(swaps_a, swaps_b) << endl;
}
