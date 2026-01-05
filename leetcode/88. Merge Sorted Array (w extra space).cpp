class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // Create a copy of nums arr
        vector<int> cnums1 = nums1;
        int i = 0, j = 0, k = 0; // Pointers for nums1, nums2, ans = nums1

        while (i < m && j < n)
        {
            if (cnums1[i] < nums2[j])
            {
                nums1[k] = cnums1[i];
                i++;
            }
            else
            {
                nums1[k] = nums2[j];
                j++;
            }
            k++;
        }

        while (i < m)
        {
            nums1[k] = cnums1[i];
            i++;
            k++;
        }

        while (j < n)
        {
            nums1[k] = nums2[j];
            j++;
            k++;
        }
    }
};