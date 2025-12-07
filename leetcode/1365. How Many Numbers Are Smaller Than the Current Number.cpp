class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        // USING COUNTING SORT
        // LOOX FOR MAX AND MIN
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());

        // CREATE COUNT ARRAY
        vector<int> count(mx - mn + 1);
        for (int number : nums)
        {
            count[number - mn]++;
        }

        // UPDATE MY COUNT ARRAY
        for (int i = 1; i < count.size(); i++)
        {
            count[i] += count[i - 1];
        }

        // CREATE RESULT ARRAY
        vector<int> ans;
        for (int number : nums)
        {
            if (number == mn)
                ans.push_back(0);
            else
                ans.push_back(count[number - mn - 1]);
        }

        return ans;
    }
};