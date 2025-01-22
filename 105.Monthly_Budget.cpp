//Monthly Budget - codechef (456)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BUDGET_
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a >= b * 30) cout << "YES\n";
        else cout << "NO\n";
    }
}
