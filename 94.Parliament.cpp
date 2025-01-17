//Parliament - codechef(419)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PARLIAMENT
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        // cout << ceil(a*1.0/2) << endl;
        if (ceil(a*1.0/2) <= b) cout << "YES\n";
        else cout << "NO\n";
    }
}
