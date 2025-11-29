class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate;

        for (int number : nums) {
            if (count == 0) {
                candidate = number;
            }

            count += (number == candidate) ? 1 : -1;
        }

        return candidate;
    }
};