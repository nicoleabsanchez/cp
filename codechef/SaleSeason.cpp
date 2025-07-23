#include <bits/stdc++.h>
using namespace std;

int new_price(int or_price) {
    if (or_price <= 100) return or_price;
    else if (or_price <= 1000) return or_price - 25;
    else if (or_price <= 5000) return or_price - 100;
    else return or_price - 500;
}

int main() {
	int t; cin >> t; 
	int x;
	while(t--){
	    cin >> x; x = new_price(x);
	    cout << x << endl;
	}
	
	return 0;
}
