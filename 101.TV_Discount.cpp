//TV Discount - codechef(447)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TVDISC
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = a - c;
        int y = b - d;
        if (x < y) cout << "First\n";
        else if (x > y) cout << "Second\n";
        else cout << "Any\n";
    }
}
