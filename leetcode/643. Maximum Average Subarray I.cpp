class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double window_sum = 0;
        //first window
        for (int i=0; i<k; i++) window_sum += nums[i];
        double largest = window_sum;

        for (int index_to_add=k; index_to_add<nums.size(); index_to_add++){
            int index_to_remove = index_to_add - k;

            window_sum += nums[index_to_add]; //right
            window_sum -= nums[index_to_remove]; //left

            largest = max(largest, window_sum);
        }

        return largest / k;
    }
};