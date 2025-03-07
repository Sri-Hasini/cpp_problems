#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, k;
        vector <int> ans;
        vector <int> ans1;
        cin >> n >> m >> k;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int p = 2 * (i + j);
                // cout << p << endl;
                if (p <= k)
                ans.push_back(p);
                if (p > k)
                ans1.push_back(p);
            }
        }
        
        if (ans.size() != 0 && ans1.size() != 0) {
            sort(ans.begin(), ans.end());
            sort(ans1.begin(), ans1.end());
            int x = ans[ans.size() - 1];
            int y = ans1[0];
            if (abs(k - x) <= abs(k - y)) cout << abs(k - x) << endl;
            else cout << abs(k - y) << endl;
        }
        else if (ans.size() == 0) {
            sort(ans1.begin(), ans1.end());
            int y = ans1[0];
            cout << abs(k - y) << endl;
        }
        else {
            sort(ans.begin(), ans.end());
            int x = ans[ans.size() - 1];
            cout << abs(k - x) << endl;
        }
    }
}
