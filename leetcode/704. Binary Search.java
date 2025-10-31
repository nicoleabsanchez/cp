class Solution {
    public int search(int[] nums, int target) {
        int start = 0, end = nums.length - 1;

        while (start <= end) {
            int mid = start + (end-start)/2;
            int value = nums[mid];

            if (value == target) return mid;

            if (value < target) start = mid + 1;
            else end = mid - 1;
        }

        return -1;
    }
}