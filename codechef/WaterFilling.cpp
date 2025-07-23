#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; 
	int a, b, c;
	while (t--) {
	    cin >> a >> b >> c;
	    if (a+b+c <= 1) cout << "Water filling time" << endl;
	    else cout << "Not now" << endl;
	}
	
	return 0;
}
