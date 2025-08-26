class Solution {
    public int maxSubArray(int[] nums) {
        int result = nums[0];
        int total = 0;

        for (int n : nums) {
            if (total < 0)
                total = 0;

            total += n;
            result = Math.max(total, result);
        }

        return result;
    }
}