//Slow Solution - codechef(1003)
//https://www.codechef.com/problems/SLOWSOLN?tab=statement
/*
here, a means maxT, b means maxN and c means sumN.....
 we can 1st compute c/b and store in x and c%b and store in y.
check if our x value is smaller than given maxT i.e., a, if yes we need to do x multiplied by sqare of maxN i.e., b and add it to square of y { here we have added the remainder square and x times b square }
if no, just multiply maxT with square of maxN i.e., a * (b * b)
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int x = c/b;
        int y = c%b;
        int sum = 0;
        if (x < a) sum = x * (b * b) + (y * y);
        else sum = a * (b * b);
        cout << sum << endl;
    }
}
