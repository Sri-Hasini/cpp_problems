//Big Achiever - codechef (699)
//https://www.codechef.com/problems/BIG
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxi = a[0];
        vector <int> ans;
        ans.push_back(1);
        for (int i = 1; i < n; i++) {
            if (maxi < a[i]) ans.push_back(1);
            else ans.push_back(0);
            maxi = max(a[i], maxi);
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
