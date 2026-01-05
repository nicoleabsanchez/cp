class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int ans = 0;
        int curr_sum = 0;
        unordered_map<int, int> prefix_sums; // prefix_sums, how many
        prefix_sums[0]++;

        for (int number : nums)
        {
            curr_sum += number;

            int diff = curr_sum - k;
            ans += prefix_sums[diff];

            prefix_sums[curr_sum]++;
        }

        return ans;
    }
};