class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> hm; // char, freq

        for (char c : s)
        {
            hm[c]++;
        }

        for (char ch : t)
        {
            if (hm[ch] > 0)
            {
                hm[ch]--;
            }
            else
                return false;
        }

        return true;
    }
};