class Solution
{
public:
    bool isPalindrome(string s)
    {
        if (s.size() == 1)
            return true;
        // two pointers
        int l = 0, r = s.size() - 1;

        while (l < r)
        {
            // find valid
            while (!isalnum(s[l]) && l < r)
                l++;
            while (!isalnum(s[r]) && r > l)
                r--;

            if (tolower(s[l]) != tolower(s[r]))
            {
                return false;
            }
            else
            {
                l++;
                r--;
            }
        }

        return true;
    }
};