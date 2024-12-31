//ICE CREAM - codechef (354)
//https://www.codechef.com/problems/ICE_CREAM
/*
if 2 * x (as having 2 icecreams) is less than or equal to y then print yes, otherwise no
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (2 * x <= y) cout << "Yes\n";
    else cout << "No\n";
}
