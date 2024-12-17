// Parity - codechef (295)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PAR2
/*
Indirectly the question asks us whether the given number of chocolates are even or odd. Always we will use the modulus operator and find it.
Lets try using bitwise operator if our value and 1 gives 0 then it is Yes otherwise No eg: n = 5 - 101, 1 - 001 --> bitwise & - 001 which gives 1, representing n as odd.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if ((n&1) == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}
