#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	int n,x;
	while (t--){
	    cin >> n >> x;
	    int pizzas = x*n/4;
	    if (x*n%4 != 0) pizzas++;
	    cout << pizzas << endl;
	}
	
    return 0;
}
