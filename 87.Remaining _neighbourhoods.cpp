// Remaining Neighbourhoods - codechef (319)
//https://www.codechef.com/problems/NEIREM
/*
As elections approach the country of Chefland, Chef's campaign is in full swing.
Chef's city has exactly 100 neighborhoods. Chef has already visited N of them to canvass for votes, and he won't stop till he's visited every last one of them! How many more neighborhoods does Chef need to visit?
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << abs(100 - n);
}
