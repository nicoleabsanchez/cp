class Solution
{
public:
    bool validPalindrome(string s)
    {
        int l = 0, r = s.size() - 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
                // 1-> I already checked from l=0, until whar r is now, i'll skip l and just have to check l+1, r
                // 2-> I already checked from l=0, until what l is now, i'll skip r and just have to check from l, r-1
            }
            l++;
            r--;
        }

        return true;
    }

    bool isPalindrome(string &s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] != s[r])
            {
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
};