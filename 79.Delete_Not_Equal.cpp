#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map <char,int> m;
        m['0'] = 0;
        m['1'] = 0;
        for (auto i : s) {
            m[i]++;
        }
        if (m['0'] == 0) cout << m['1'] << endl;
        else if (m['1'] == 0) cout << m['0'] << endl;
        else cout << 1 << endl;
    }
}
