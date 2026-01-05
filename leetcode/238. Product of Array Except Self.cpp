class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 1);

        int prefix = nums[0];
        for (int i = 1; i <= nums.size() - 1; i++)
        {
            ans[i] *= prefix;
            prefix *= nums[i];
        }

        int postfix = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            ans[i] *= postfix;
            postfix *= nums[i];
        }

        return ans;
    }
};