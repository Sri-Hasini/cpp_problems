//A. Calculating Function - codeforces (800)
//https://codeforces.com/problemset/problem/486/A
/*
For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.
  */
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long sum_odd = 0, sum_even = 0;
    if (n & 1) {
        sum_even = ((n - 1)/2) * (((n - 1)/2)+1);
        sum_odd =((n+1)/2)*((n+1)/2);
    }
    else {
        sum_even = (n/2) * ((n/2)+1);
        sum_odd = (n/2)*(n/2);
    }
    cout << sum_even - sum_odd;
}
