//Chef And Salary Pay - codechef (1269)
//https://www.codechef.com/problems/HCAGMAM1
/*
I used map for solving this. I just counted all the 0's and 1's and stored its occurances in a map. 
Then found the maximum occurance of 1's and stored in maxi. multiplied x with all 1's and y with maxi (for bonus).
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        map <char,int> m;
        m['0'] = 0;
        m['1'] = 0;
        int maxi = 0;
        int cnt = 0;
        for (auto i : s) {
            m[i]++;
            if (i == '1') cnt++;
            if (i == '0') {
                if (maxi < cnt)
                maxi = cnt;
                cnt = 0;
            }
        }
        int ans = x * m['1'];
        if (maxi < cnt) maxi = cnt;
        ans += y * maxi;
        cout << ans << endl;
        // cout << maxi << endl;
    }
}
