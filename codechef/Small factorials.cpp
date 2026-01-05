#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        long long num = 1;
        if (n<20){
            for (long long i=1; i<=n; i++) {
                num *= i;
            }
            cout << num << endl;
            continue;
        }
        else {
            vector<int> ans(1, 1);
            
            for (int i=2; i<=n; i++) {
                vector<int> temp;
                int carry = 0;
                for (int digit : ans) {
                    int prod = digit * i + carry;
                    temp.push_back(prod % 10);
                    carry = prod / 10;
                }
                
                while (carry > 0) {
                    temp.push_back(carry%10);
                    carry /= 10;
                }
                
                ans = temp;
            }
            
            reverse(ans.begin(), ans.end());
            for (int number : ans) cout << number;
            cout << endl;
        }
    }
}
