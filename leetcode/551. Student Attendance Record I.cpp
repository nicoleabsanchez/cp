class Solution
{
public:
    bool checkRecord(string s)
    {
        int abs_count = 0, late_cons = 0;

        for (char c : s)
        {
            if (c == 'A' && ++abs_count >= 2)
                return false;
            if (c == 'L' && ++late_cons >= 3)
                return false;
            if (c != 'L')
                late_cons = 0;
        }

        return true;
    }
};