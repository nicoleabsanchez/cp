#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int x, y;
	while (t--) {
		cin >> x >> y;
		if (x < y) cout << "BIKE" << endl;
		else if (y < x) cout << "CAR" << endl;
		else cout << "SAME" << endl;
	}

	return 0;
}
