//Mode of frequencies - codechef(1234)
//https://www.codechef.com/problems/MODEFREQ?tab=ide
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map <int,int> m;
        for (int i = 0; i < n; i++) {
            m[a[i]]++;
        }
        map <int, int> m1;
        for (auto i : m) {
            m1[i.second]++;
        }
        int x, maxi = 0;
        for (auto i : m1) {
            if (maxi < i.second) {
                maxi = i.second;
                x = i.first;
            }
        }
        cout << x << endl;
    }
}
