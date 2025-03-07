//
//Bulk Discount - codechef()
//https://www.codechef.com/START165D/problems/BDISC
/*

*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int cnt = 1;
        int sum = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] >= cnt) {
                a[i] -= cnt;
                sum += a[i];
            }
            cnt++;
        }
        cout << sum << endl;
    }
}
