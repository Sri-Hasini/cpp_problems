//Donation Rewards - codechef (395)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DOREWARD
/*
the question is asked to print "BRONZE" when the value is less than or equal to 3. if it is greater 3 and less than or equal to 6, then print "SILVER" or else print "GOLD"
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (n <= 3) cout << "BRONZE\n";
        else if (n > 3 && n <= 6) cout << "SILVER\n";
        else cout << "GOLD\n";
    }
}
