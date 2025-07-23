#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n, x, ans;
		cin >> n >>x;
		if (x >= n) cout << 0 << endl;
		else {
			ans = (n-x)/4; // candies I need to buy / n of candies in a package
			if ((n-x)%4 != 0) ans++;
			cout << ans << endl;
		}
	}
	return 0;
}
