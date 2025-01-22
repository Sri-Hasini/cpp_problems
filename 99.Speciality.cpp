//Speciality - codechef(434)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SPECIALITY
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b && a > c) cout << "Setter\n";
        else if (c > a && c > b) cout << "Editorialist\n";
        else if (b > a && b > c) cout << "Tester\n";
    }
}
