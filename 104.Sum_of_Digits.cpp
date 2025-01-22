//Sum of Digits - codechef(455)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW006
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        while (n > 0) {
            int r = n % 10;
            sum += r;
            n /= 10;
        }
        cout << sum << endl;
    }
}
