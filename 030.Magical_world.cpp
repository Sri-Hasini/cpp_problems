//magical world - codechef (1005)
https://www.codechef.com/problems/P2149
/*
we can think logically for this question.
we just need to check if the given rectangle's area is less than or equals to the area of square.
if yes, we print 0. 
otherwise we check another condition that if the minimum number * 1 is less than or equals to the area of square, if yes we print 1
else we print 2
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x;
        cin >> a >> b >> x;
        if (a*b <= x*x) cout << 0 << endl;
        else if ((min(a,b) *1) <= x*x) cout << 1 << endl;
        else cout << 2 << endl;
    }
}
