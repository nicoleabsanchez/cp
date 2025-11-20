#include <bits/stdc++.h>
using namespace std;

int last_occ(vector<int> arr, int target) {
    int start = 0, end = arr.size()-1;
    int result = -1;
    
    while (start <= end) {
        int mid = start + (end-start)/2;
        
        if (arr[mid] == target) {
            result = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else end = mid -1; // target < arr[mid]
    } 
    return result;
}

int main() {
	int n;
	cin >> n;
	int m;
	cin >> m;
	vector<int> nums(n);
	for (int i=0; i<n; i++) cin >> nums[i];
	
	for (int i=0; i<m; i++) {
	    int number; cin >>number;
	    int ans = last_occ(nums, number);
	    cout << ans << endl;
	}

}
