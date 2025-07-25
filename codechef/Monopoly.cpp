#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	vector<int> a(4);
	
	while(t--){
	    bool flag = false;
	    int sum = 0; 
	    
		for(int i=0; i<4; i++) {
			cin >> a[i];
			sum += a[i];
		}
		
		for (int i=0; i<4;i++){
			if (2*a[i] > sum) flag = true;
		}

		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;	
	}

	return 0;
}