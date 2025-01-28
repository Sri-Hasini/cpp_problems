//Adjacent Sum Parity - codechef(1013)
//https://www.codechef.com/problems/ADJSUMPAR?tab=statement
/*
if we observe this, we got to know that, if the sum of given array is even then we can say no otherwise yes
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum & 1) cout << "NO\n";
        else cout << "YES\n";
    }
}
