//Andrew and the Meatballs - codechef(
//https://www.codechef.com/problems/AMMEAT
/*
for solving this, we need to sort this in descending order, and add every element to your sum , and also increment count value parallely,
when ever our sum is greater or equal to required value, keep some flag value as positive and break. 
at the out of the loop print the count if flag is positive otherwise -1, because it means that no such element occurs.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;
        vector <long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<long long> ());
        long long sum = 0;
        long long cnt = 0;
        int f = 0;
        for (long long i = 0; i < n; i++) {
            sum += a[i];
            cnt++;
            if (sum >= m) {
                f = 1;
                break;
            }
        }
        if (f) cout << cnt << endl;
        else cout << -1 << endl;
    }
}
