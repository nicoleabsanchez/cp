#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, seat; cin >> t;
	while(t--){
		cin >> seat;
		if (seat - 1 < 100 - seat) cout << "LEFT" << endl;		
		else cout << "RIGHT" << endl;
	}

	return 0;
}
