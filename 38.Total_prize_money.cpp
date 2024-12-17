//Total prize money - codechef(296)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRIZEPOOL
/*
the question is very direct.
we need to give x rupees to every person who is less than or equal to 10th rank, and we need to give y rupees to every person who is between 11 and 100th rank.
So, we just need to multiply respectively and then sum them up.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        cout << 10 * x + 90 * y << endl;
    }
}
