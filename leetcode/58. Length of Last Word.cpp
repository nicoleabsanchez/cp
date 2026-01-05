class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        if (s.size() == 1)
            return 1;

        int i = s.size() - 1;
        while (s[i] == ' ')
        {
            i--;
        }

        int count = 0;
        while (i >= 0 && s[i] != ' ')
        {
            i--;
            count++;
        }

        return count;
    }
};