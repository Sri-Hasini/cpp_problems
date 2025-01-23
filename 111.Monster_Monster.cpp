//Monster Monster - codechef(1184)
//https://www.codechef.com/problems/KO_MON?tab=statement
/*
We can apply bruteforce in an optimal way....
We can sort it in descending order so that we will have larger number at starting of vector, store this starting value in our maxi initially.
we run a loop from next index i.e., 1 till end.
what we did here is, we have updated the values by adding themselves to (index * given HP).
we calculated maxi every time for the previous maxi and our updated element... finally print the maxi....
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector <long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<long long>());
        long long maxi = a[0];
        for (long long i = 1; i < n; i++) {
            a[i] += (i * k);
            maxi = max(maxi, a[i]);
        }
        cout << maxi << endl;
    }
}
