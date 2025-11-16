class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> hp; // value, freq

        for (int number : nums)
            hp[number]++;

        vector<vector<int>> freq(nums.size() + 1); // i = count, value -> lit value lol

        for (auto pair : hp)
        {
            freq[pair.second].push_back(pair.first);
        }

        vector<int> ans;
        for (int i = freq.size() - 1; i >= 0; i--)
        {
            for (int j = 0; j < freq[i].size(); j++)
            {
                if (k)
                {
                    ans.push_back(freq[i][j]);
                    k--;
                }
                else
                    return ans;
            }
        }

        return ans;
    }
};