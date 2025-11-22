class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int op = 0;
        for (int n : nums)
        {
            int mod = n % 3;
            op += min(mod, 3 - mod);
            // mod -> erase the residuo
            // 3-mod -> with using modulo y already took all groups of 3's i could and i need 3-mod to make on more group of 3
        }

        return op;
    }
};