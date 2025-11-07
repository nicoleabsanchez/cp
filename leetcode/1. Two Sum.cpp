class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp; // value, index

        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];

            auto it = mp.find(diff);
            if (it != mp.end())
                return {it->second, i};

            mp.insert({nums[i], i});
        }

        return {};
    }
};