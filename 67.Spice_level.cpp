//Soice level - codechef (390)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENSPICE
/*
the question is given to print "MILD" if the n value is less than 4,  if n is greater than 4 and less than 7 then print "MEDIUM", otherwise print "HOT"
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (n < 4) cout << "MILD\n";
        else if (n >= 4 && n < 7) cout << "MEDIUM\n";
        else cout << "HOT\n";
    }
}
