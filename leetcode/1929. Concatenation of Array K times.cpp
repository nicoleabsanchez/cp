class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        int k = 2;
        vector<int> ans(k * n);

        for (int i = 0; i < ans.size(); i++)
        {
            ans[i] = nums[i % n];
        }

        return ans;
    }
};