#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        // cout << a[i] << " " << a[i + 1] << endl;
        if (a[i] > a[i + 1]) {
            cnt += a[i] - a[i + 1];
            a[i + 1] += a[i] - a[i + 1];
        }
    }
    cout << cnt;
}