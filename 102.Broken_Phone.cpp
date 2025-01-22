//Broken Phone - codechef (451)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BROKENPHONE
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a < b) cout << "REPAIR\n";
        else if (a > b) cout << "NEW PHONE\n";
        else cout << "ANY\n";
    }
}
