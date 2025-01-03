//Temperature Balance - codechef (1245)
//https://www.codechef.com/problems/TEMPBAL?tab=statement
/*
iterate from 0 to n - 2, keep a variable as sum (just like prefix sum) add the absolute value of the element, add next element as the sum of previous and current one.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector <long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long sum = 0;
        for (long long i = 0; i < n - 1; i++) {
            sum += abs(a[i]);
            a[i + 1] += a[i];
        }
        cout << sum << endl;
    }
}
