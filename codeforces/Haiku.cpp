#include <bits/stdc++.h>
using namespace std;
bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int count_v(string &s)
{
    int count = 0;
    for (char c : s)
    {
        if (is_vowel(c))
            count++;
    }
    return count;
}

int main()
{
    string s1, s2, s3;

    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    if (count_v(s1) == 5 && count_v(s2) == 7 && count_v(s3) == 5)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}
