//Profit Increment - codechef (414)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PROINC
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << (a*0.1)+a - (a-b) << endl;
    }
}
