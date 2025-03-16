//Chef and Masks - codechef (432)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CMASKS
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a*100 < b * 10) cout << "Disposable\n";
        else if (a*100 > b * 10) cout << "Cloth\n";
        else cout << "Cloth\n";
    }
}
