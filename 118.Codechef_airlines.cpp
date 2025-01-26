//codechef airlines - codechef(475)
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AIRLINES
/*
Chef has opened a new airline. Chef has 10 airplanes where each airplane has a capacity of X passengers.
On the first day itself, Y people are willing to book a seat in any one of Chef's airplanes.
Given that Chef charges Z rupees for each ticket, find the maximum amount he can earn on the first day.
  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int d = min(a * 10, b);
        cout << d * c << endl;
    }
}
