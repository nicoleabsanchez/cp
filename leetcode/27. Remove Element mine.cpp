class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++; // puntero al siguiente indez a insertar y contador de la cantidad de inserciones
            }
        }

        return k;
    }
};