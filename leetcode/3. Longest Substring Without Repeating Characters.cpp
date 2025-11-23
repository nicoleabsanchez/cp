class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> hs;
        int ans = 0;
        // sliding window
        int l = 0;
        for (int r = 0; r < s.size(); r++)
        {
            while (hs.count(s[r]))
            {
                hs.erase(s[l]);
                l++;
            }
            hs.insert(s[r]);
            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};