class Solution {
    public int removeDuplicates(int[] nums) {
        int leftPointer = 1;
        
        for (int rightPointer=1; rightPointer<nums.length; rightPointer++){
            if (nums[rightPointer] != nums[rightPointer-1]) {
                nums[leftPointer] = nums[rightPointer];
                leftPointer++;
            }
        }

        return leftPointer;
    }
}