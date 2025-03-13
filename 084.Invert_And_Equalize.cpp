//Invert And Equalize - codechef(1102)
//https://www.codechef.com/problems/INVEQ
/*
we just need to take 2 vectors , one for 1's and other for 0's.
these are used to store continuous occurance values of either 1 or 0 respectively.
so we finally print the size of vector which have minimum size.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        vector <int> ov;
        vector <int> zv;
        if (n == 1) cout << 0 << endl;
        else {
            int cnt = 1;
            for (int i = 0; i < n - 1; i++) {
                if (a[i] == a[i + 1]) cnt++;
                else {
                    if (a[i] == '1') ov.push_back(cnt);
                    else zv.push_back(cnt);
                    cnt = 1;
                }
            }
            if (a[n - 1] == '1') ov.push_back(cnt);
            if (a[n - 1] == '0') zv.push_back(cnt);
            // for (auto i : ov) cout << i << " ";
            // cout << endl;
            // for (auto i : zv) cout << i << " ";
            // cout << endl << endl;
            cout << min(ov.size(), zv.size()) << endl;
        }
    }
}
