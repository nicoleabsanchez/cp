class Solution
{
public:
    long long concatenate(long long i, long long j)
    {
        long long temp = j;
        long long multiplier = 1;

        if (temp == 0)
        {
            multiplier *= 10;
        }
        else
        {
            while (temp > 0)
            {
                multiplier *= 10;
                temp /= 10;
            }
        }

        return (i * multiplier) + j;
    }

    long long findTheArrayConcVal(vector<int> &nums)
    {
        long long value = 0;

        for (int i = 0; i <= (nums.size() - 1) / 2; i++)
        {
            int first = nums[i];
            int last = nums[nums.size() - 1 - i];

            if (i != nums.size() - 1 - i)
            {
                value += concatenate(first, last);
            }
            else
                value += first;
        }

        return value;
    }
};