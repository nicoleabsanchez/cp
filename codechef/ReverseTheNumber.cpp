#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; string n; cin >> t;
	while (t--){
		cin >> n;
		reverse(n.begin(), n.end());
		cout << stoi(n)<< endl;
	}

	return 0;
}
