class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> us;

        for (int number : nums)
        {
            if (us.count(number))
                return true;
            us.insert(number);
        }

        return false;
    }
};