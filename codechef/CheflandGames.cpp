#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b, c, d;
    while (t--) {
        cin >> a >> b >> c >> d;
        if (a + b + c + d == 0)
            cout << "IN" << endl;
        else
            cout << "OUT" << endl;
    }
    return 0;
}
