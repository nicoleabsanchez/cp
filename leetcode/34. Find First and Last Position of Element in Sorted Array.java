class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans = {-1, -1};
        int start = bs(nums, target, true);
        int end = bs(nums, target, false);

        ans[0] = start; ans[1] = end;
        return ans;
    }

    int bs(int[] nums, int target, boolean looking4first) {
        int ans = -1;
        int start = 0, end = nums.length -1;

        while (start <= end) {
            int mid = start + (end - start) / 2; 

            if (target < nums[mid]) end = mid - 1;
            else if (target > nums[mid]) start = mid + 1;
            else {
                //potential ans
                ans = mid;
                if (looking4first) end = mid - 1;
                else start = mid + 1;
            }
        }
        
        return ans;
    }
    
}