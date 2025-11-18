
class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        int last_one_idx, aux;
        int n = nums.size();
        // search for the first one
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                last_one_idx = i;
                aux = i;
                aux++;
                break;
            }
        }

        for (int i = aux; i < n; i++)
        {
            if (nums[i] == 1)
            {
                if (i - last_one_idx - 1 >= k)
                {
                    last_one_idx = i;
                }
                else
                    return false;
            }
        }

        return true;
    }
};