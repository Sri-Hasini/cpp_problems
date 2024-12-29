//Minimum Coins - codechef (390)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINCOINSREQ
/*
they are asked us to find the change we need to give in coins. for that we can do modulus operation with 10 and print the result.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << n%10 << endl;
    }
}
