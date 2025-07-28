#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int a, b, c;
	while (t--){
		cin >> a >> b >> c;
		if (max(a,c) <= b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
