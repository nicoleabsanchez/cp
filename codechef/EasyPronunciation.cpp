#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    int t;
    cin >> t;
    int size;
    string word;
    while (t--)
    {
        bool easy = true;
        cin >> size >> word;
        for (int i = 0; i <= size - 4; i++)
        {
            if (!isVowel(word[i]) && !isVowel(word[i + 1]) && !isVowel(word[i + 2]) && !isVowel(word[i + 3]))
            {
                easy = false;
                break;
            }
        }

        if (easy)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
