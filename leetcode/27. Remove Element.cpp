class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        // two pointers approach
        int k = 0; // index where im going to but the next number that is != val

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i]; // coloco en mi index reservado el numero bueno que encontré
                // muevo mi index reservado
                k++;
            }
        }

        return k;
    }
};