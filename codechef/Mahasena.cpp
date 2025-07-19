#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A | Mahasena on CodeChef

int main(){
    int n; cin>>n;
    vector<int> soldiers(n);
    for(int i =0; i<n;i++) cin>>soldiers[i];

    int luckies =0, unluckies=0;

    for (int i =0;i<n;i++){
        if (soldiers[i]%2==0) luckies++;
        else unluckies++;
    }

    if (luckies>unluckies) cout << "READY FOR BATTLE"<<endl;
    else cout << "NOT READY" <<endl;

    return 0;
}