class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> s_nums;
        for (int number : nums)
            s_nums.insert(number);

        int longest = 0;
        for (int number : s_nums)
        {
            // start if it's the start of a sequence | si no está el anterior
            if (s_nums.find(number - 1) == s_nums.end())
            {
                int len = 0;
                while (s_nums.find(number + len) != s_nums.end())
                {
                    len++;
                }

                longest = max(longest, len);
            }
        }

        return longest;
    }
};