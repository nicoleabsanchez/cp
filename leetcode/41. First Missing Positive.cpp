class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= 0)
            {
                nums[i] = nums.size() + 1;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]);
            index--; // 0 indexed
            if (index < nums.size())
            {
                nums[index] *= nums[index] < 0 ? 1 : -1;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                return i + 1;
        }

        return nums.size() + 1;
    }
};