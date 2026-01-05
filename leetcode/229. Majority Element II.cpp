class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> freq; // val, count

        for (int number : nums)
        {
            freq[number]++;

            if (freq.size() <= 2)
            {
                continue;
            }

            unordered_map<int, int> new_freq;
            for (auto par : freq)
            {
                if (par.second > 1)
                {
                    new_freq[par.first] = par.second - 1;
                }
            }

            freq = new_freq;
        }

        vector<int> ans;
        for (auto par : freq)
        {
            if (count(nums.begin(), nums.end(), par.first) > nums.size() / 3)
            {
                ans.push_back(par.first);
            }
        }

        return ans;
    }
};