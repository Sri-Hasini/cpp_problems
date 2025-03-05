//Minimum types - codechef(1394)
/*
As we need to find the minimum types of coins used, we will first take a vector which stores the total sum of each ith coin in ith place.
we will sort it it descending order.
at ending we will keep element 0, if the sum of all coins doesn't sufficient then we will print -1.
we will run a loop by checking condition that if the sum is greater than or equal to x(given).
*/
//https://www.codechef.com/problems/MINBUY
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }
        vector <int> v;
        for (int i = 0; i < n; i++) {
            v.push_back(a[i]*b[i]);
        }
        sort(v.begin(), v.end(), greater<int>());
        v.push_back(0);
        int sum = v[0],i;
        for ( i = 1; i < n+1; i++) {
            if (sum >= x) {
                break;
            }
            
            sum += v[i];
        }
        if (i == n+1) cout << -1 <<endl;
        else cout << i << endl;
    }
}
