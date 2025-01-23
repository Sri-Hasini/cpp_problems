//First and Last Digit - codechef(467)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW004?tab=statement
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x < 9 && x > -10) cout << x+x << endl;
        else {
            int sum = 0;
            sum += x % 10;
            x /= 10;
            while (x > 9) {
                x /= 10;
            }
            sum += x;
            cout << sum << endl;
        }
    }
}
