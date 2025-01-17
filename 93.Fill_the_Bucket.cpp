//Fill the Bucket - codechef(419)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FBC
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if (a - b >= 0) cout << a - b << endl;
        else cout << 0 << endl;
    }
}
