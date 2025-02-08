//Maximum subarray sum - CSES (sorting & searching)
//https://cses.fi/problemset/task/1643
#include <bits/stdc++.h>
using namespace std;
long long kadane(vector <long long> a) {
    long long max_sum = a[0], max_global = a[0];
    for (long long i = 1; i < a.size(); i++) {
        max_sum = max(a[i], max_sum + a[i]);
        if (max_sum > max_global) max_global = max_sum;
    }
    return max_global;
}
int main() {
    long long n;
    cin >> n;
    vector <long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << kadane(a);
}
