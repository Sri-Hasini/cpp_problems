//Literacy Rate - codechef (512)
//https://www.codechef.com/problems/LITRATE
/*
You are given two positive integers P and L denoting the total population of Chefland and the total number of literate people in Chefland.
Find whether the literacy rate of Chefland is greater than or equal to 75%.
Note that the literacy rate is calculated as L/P × 100% 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        float c = (b / (a * 1.0)) * 100;
        // cout << c << endl;
        if (c >= 75) cout << "Yes\n";
        else cout << "No\n";
    }
}
