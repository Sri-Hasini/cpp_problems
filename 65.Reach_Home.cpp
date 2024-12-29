//Reach Home - codechef (395)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/REACH_HOME
/*
The question asked us whether chef can travel to his home which is at some b km away with a litres of petrol. each litre can serve for 5 km. 
so check if b km is less than or equal to a Multiplies 5 if yes, print "yes', otherwise "no".
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if (b <= a * 5) cout << "Yes\n";
        else cout << "No\n";
    }
}
