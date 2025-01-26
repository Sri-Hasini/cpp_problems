//Battery Low - codechef (479)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BATTERYLOW
/*
Chef's phone shows a Battery Low notification if the battery level is 15% or less.
Given that the battery level of Chef's phone is X%, determine whether it would show a Battery low notification.
  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n <= 15) cout << "YES\n";
        else cout << "NO\n";
    }
}
