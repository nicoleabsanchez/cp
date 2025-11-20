#include <bits/stdc++.h>
using namespace std;

int lb(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int result = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            result = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1; // target < arr[mid]
    }

    return result;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    for (int i = 0; i < m; i++)
    {
        int search;
        cin >> search;
        cout << lb(nums, search) << endl;
    }
}