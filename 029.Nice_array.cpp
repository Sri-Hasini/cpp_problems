// Nice array - codechef(1546)
/*
We need to find whether an array exits for the given condition. 
We calculated ceil for every element and stored it in another array. We calculated sum parallelly. We counted the number of odd numbers in the given array.
if the calculated sum is 0, then print "YES" otherwise check if it is greater than 0 and it is less than or equal to count of odd number, print "YES", else print "NO".
*/
//https://www.codechef.com/problems/NICEARRAY
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
