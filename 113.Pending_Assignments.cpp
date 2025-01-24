//Pending Assignments - codechef(468)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ASSIGNMNT
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int d = c * 24 * 60;
        if (a * b <= d) cout << "YES\n";
        else cout << "NO\n";
    }
}
