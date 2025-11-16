#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, n3; cin >> n1 >> n2 >> n3;
    
    vector<int> h1(n1), h2(n2), h3(n3);
    
    for (int i=0; i<n1; i++) cin >> h1[i];
    for (int i=0; i<n2; i++) cin >> h2[i];
    for (int i=0; i<n3; i++) cin >> h3[i];
    
    // calcular la suma de cada pila
    int sum1 = 0, sum2=0, sum3=0;
    for (int h : h1) sum1 += h;
    for (int h : h2) sum2 += h;
    for (int h : h3) sum3 += h;
    
    //iteradores
    int i1 = 0, i2=0, i3=0;
    while (sum1 != sum2 || sum2 != sum3) {
        int max_sum = max({sum1, sum2, sum3});
        
        if (sum1 == max_sum && i1 < n1) {
            sum1 -= h1[i1];
            i1++;
        }
        else if (sum2 == max_sum && i2 < n2) {
            sum2 -= h2[i2];
            i2++;
        }
        else if (sum3 == max_sum && i3 < n3){
            sum3 -= h3[i3];
            i3++;
        }
    }
    
    cout << sum1 << endl;
}











